#include <luminance_sensor.h>
#include <i2c.h>
#include <msp430f6779a.h>

/************************************************************
* setup_lux
* Sets LSDIR with the LS pins
* Set LSDIR, LSOUT, and the LS pins in the .h file
************************************************************/
void setup_lux(void){
   LSDIR |= LS_1|LS_2|LS_3|LS_4|LS_5|LS_6; 
}

/************************************************************
* read_lux_als_single
* Read the 3 ALS (Ambient Light Sense) registers and then 
* assemble them into an unsigned long (1 byte)
* if LS is unresponsive, 9999 is returned
*
* lux = {LS ALS}
* 
************************************************************/
void read_lux_als_single(unsigned long * lux, unsigned char ls_pin){
  int i;
  short check_value;
  unsigned char start_als[2]={LS_MAIN_CTRL,LS_EN},
                gain[2] = {LS_GAIN,LS_GAIN_1},
                resolution[2] = {LS_MEAS_RATE, (LS_RES_20BIT<<4) | (LS_MEAS_500MS)}, 
                als[1] = {LS_ASL_START},
                als_raw[3];
  unsigned long als_val = 0;

  LSOUT |= ls_pin;                                              // Turn on LS
  
  ctl_timeout_wait(ctl_get_current_time()+5);                   // Power on delay
  i2c_tx(LS_ADDR,start_als,2);                                  // Set up the LS 
  i2c_tx(LS_ADDR,gain,2);
  i2c_tx(LS_ADDR,resolution,2);
  ctl_timeout_wait(ctl_get_current_time()+425);                 // Wait for first read

  check_value = i2c_txrx(LS_ADDR,als,1,als_raw,3);              // Read the ALS value bytes
  if( check_value > 0){                                         // If received correctly
    for(i=0; i < 3; ++i){
      als_val|=(unsigned long)als_raw[i]<<8*i;                    // Assemble the long from the read bytes
    }
    lux[0] = als_val;
  }else{                                                        // If error generated
    lux[0] = 9999;                                                // set long to 9999
  }

  LSOUT &= ~ls_pin;                                             // Turn off LS
}

/************************************************************
* read_lux_als
* Reads the ALS value for all 6 LS (6 bytes)
* if LS is unresponsive, 9999 is returned
*
* lux = {LS_1 ALS, LS_2 ALS, LS_3 ALS, LS_4 ALS, LS_5 ALS, LS_6 ALS}
* 
************************************************************/
void read_lux_als(unsigned long * lux){
  int i;
  const unsigned char ls_pin[6] = {LS_1, LS_2, LS_3, LS_4, LS_5, LS_6};
  unsigned long temp[1];

  for(i = 0; i < 6; ++i){
    temp[0] = 0;
    read_lux_als_single(temp,ls_pin[i]);
    lux[i] = temp[0];
  }
}

/************************************************************
* read_lux_cs_single
* Sets the LS in CS mode and reads the registers associated 
* with IR, Green, Blue, Red (in that order) and assembles
* each into their own unsigned long (4 bytes)
* if LS is unresponsive, 9999 is returned
*
* lux = {LS IR, LS Green, LS Blue, LS Red}
*
************************************************************/
void read_lux_cs_single(unsigned long * lux, unsigned char ls_pin){
  int j=0,i=0;
  short check_value;
  unsigned char start_cs[2]={LS_MAIN_CTRL,LS_EN|LS_CS_mode},
                start[1]={LS_MAIN_CTRL},
                status[1] = {LS_MAIN_STATUS},
                resolution[2] = {LS_MEAS_RATE, (LS_RES_20BIT<<4) | (LS_MEAS_500MS) }, 
                gain[2] = {LS_GAIN,LS_GAIN_1};
  unsigned char cs[1] = {LS_IR_START}; 
  unsigned char status_resp[2],start_resp[2],cs_raw[12];
  unsigned long cs_val = 0;

  LSOUT |= ls_pin;                                              // Turn on LS
  
  ctl_timeout_wait(ctl_get_current_time()+5);                   // Wait for power up
  i2c_tx(LS_ADDR,start_cs,2);                                   // Set up the LS 
  i2c_tx(LS_ADDR,gain,2);
  i2c_tx(LS_ADDR,resolution,2);
  ctl_timeout_wait(ctl_get_current_time()+425);                 // Wait for first measurement

  check_value = i2c_txrx(LS_ADDR,cs,1,cs_raw,12);               // Read the cs value bytes
  if(check_value > 0){                                          // If received correctly
    for(j=0; j < 4; ++j){
      cs_val = 0;
      for(i=0; i < 3; ++i){
        cs_val|=(unsigned long)cs_raw[i+j*3]<<8*i;                // Assemble the long from the read bytes
      }
      lux[j] = cs_val;
    }
  }else{                                                        // If Error in transmission
    for(j=0; j < 4; ++j){
      lux[j] = 9999;                                              // Set long to 9999
    }
  }
  LSOUT &= ~ls_pin;                                             // Turn off LS
}

/************************************************************
* read_lux_cs
* Reads all CS values for all 6 LS (24 bytes)
* if LS is unresponsive, 9999 is returned
*
* lux = {LS_1 IR, LS_1 Green, LS_1 Blue, LS_1 Red,
*        LS_2 IR, LS_2 Green, LS_2 Blue, LS_2 Red,
*        LS_3 IR, LS_3 Green, LS_3 Blue, LS_3 Red,
*        LS_4 IR, LS_4 Green, LS_4 Blue, LS_4 Red,
*        LS_5 IR, LS_5 Green, LS_5 Blue, LS_5 Red,
*        LS_6 IR, LS_6 Green, LS_6 Blue, LS_6 Red}
* 
************************************************************/
void read_lux_cs(unsigned long * lux){
  int i,j;
  const unsigned char ls_pin[6] = {LS_1, LS_2, LS_3, LS_4, LS_5, LS_6};
  unsigned long temp[4];

  for(i = 0; i < 6; ++i){
    read_lux_cs_single(temp,ls_pin[i]);
    for(j=0;j<4;++j){
      lux[i*4+j] = temp[j];
    }
  }
}

/************************************************************
* read_lux_all_single
* Reads the ALS and CS values for a single LS
* and assembles them in to unsigned longs (5 bytes)
* if LS is unresponsive, 9999 is returned
*
* lux = {LS ALS, LS IR, LS Green, LS Blue, LS Red}
*
************************************************************/
void read_lux_all_single(unsigned long * lux, unsigned char ls_pin){
  int j,i;
  unsigned long temp[4] = {0,0,0,0};

  read_lux_als_single(temp,ls_pin);
  lux[0] = temp[0]; 
  read_lux_cs_single(temp,ls_pin);
  for(i=0;i<4;++i){
    lux[i+1] = temp[i];
  }
}

/************************************************************
* read_lux_all
* Reads the ASL and CS values for all (6) LS (30 bytes)
* if LS is unresponsive, 9999 is returned
*
* lux = {LS_1 ALS, LS_1 IR, LS_1 Green, LS_1 Blue, LS_1 Red,
*        LS_2 ALS, LS_2 IR, LS_2 Green, LS_2 Blue, LS_2 Red,
*        LS_3 ALS, LS_3 IR, LS_3 Green, LS_3 Blue, LS_3 Red,
*        LS_4 ALS, LS_4 IR, LS_4 Green, LS_4 Blue, LS_4 Red,
*        LS_5 ALS, LS_5 IR, LS_5 Green, LS_5 Blue, LS_5 Red,
*        LS_6 ALS, LS_6 IR, LS_6 Green, LS_6 Blue, LS_6 Red}
*        
************************************************************/
void read_lux_all(unsigned long * lux){
  int i,j;
  const unsigned char ls_pin[6] = {LS_1, LS_2, LS_3, LS_4, LS_5, LS_6};
  unsigned long temp[5] = {0,0,0,0,0};

  for(i = 0; i < 6; ++i){
    read_lux_all_single(temp,ls_pin[i]);
    for(j=0;j<5;++j){
      lux[i*5+j] = temp[j];
    }
  }
}

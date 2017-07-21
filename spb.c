#include <spb.h>
#include <i2c.h>
#include <msp430f6779a.h>

void spb_setup(void){
  initI2C(4,0,1);
  P6DIR = BIT5|BIT6|BIT7;
  P6OUT = 0;
}

void read_lux_als(long * lux){
  int i=0;
  unsigned char start_als[2]={LS_MAIN_CTRL,LS_EN},
                start_rgb[2]={LS_MAIN_CTRL,LS_EN|LS_CS_mode},
                standby[2] = {LS_MAIN_CTRL,0x00}, 
                status[1] = {LS_MAIN_STATUS},
                resolution[2] = {LS_MEAS_RATE, (LS_RES_18BIT<<4) | (LS_MEAS_100MS) }, 
                gain[2] = {LS_GAIN,LS_GAIN_1},
                als[1] = {LS_ASL_START}; 
  unsigned char status_resp[2],als_raw[3];
  unsigned long als_val = 0;

  P6DIR |= LS_1|LS_2|LS_3;                                    // Setup LS pins 
  P6OUT |= LS_1;                                              // Turn on LS_1
  
  ctl_timeout_wait(ctl_get_current_time()+5);  
  i2c_tx(LS_ADDR,start_als,2);                                // Set up the LS 
  i2c_tx(LS_ADDR,gain,2);
  i2c_tx(LS_ADDR,resolution,2);
  ctl_timeout_wait(ctl_get_current_time()+105);

  als_val = 0;
  i2c_txrx(LS_ADDR,als,1,als_raw,3);                         // Read the ALS value bytes
  for(i=0; i < 3; ++i){
    als_val|=(unsigned long)als_raw[i]<<8*i;                 // Assemble the long from the read bytes
  }
  lux[0] = als_val;
  P6OUT &= ~LS_1;                                             // Turn off LS_1
}

void read_lux_rgb(long * lux){
  int j=0,i=0;
  unsigned char start_als[2]={LS_MAIN_CTRL,LS_EN},
                start_rgb[2]={LS_MAIN_CTRL,LS_EN|LS_CS_mode},
                start[1]={LS_MAIN_CTRL},
                standby[2] = {LS_MAIN_CTRL,0x00}, 
                status[1] = {LS_MAIN_STATUS},
                resolution[2] = {LS_MEAS_RATE, (LS_RES_18BIT<<4) | (LS_MEAS_100MS) }, 
                gain[2] = {LS_GAIN,LS_GAIN_1};
  unsigned char rgb[1] = {LS_IR_START}; 
  unsigned char status_resp[2],start_resp[2],rgb_raw[12];
  unsigned long rgb_val = 0;

  P6DIR |= LS_1|LS_2|LS_3;                                    // Setup LS pins 
  P6OUT |= LS_1;                                              // Turn on LS_1
  
  ctl_timeout_wait(ctl_get_current_time()+5);  
  i2c_tx(LS_ADDR,start_rgb,2);                                // Set up the LS 
  i2c_tx(LS_ADDR,gain,2);
  i2c_tx(LS_ADDR,resolution,2);
  ctl_timeout_wait(ctl_get_current_time()+105);

  i2c_txrx(LS_ADDR,rgb,1,rgb_raw,12);                         // Read the RGB value bytes
  for(j=0; j < 4; ++j){
    rgb_val = 0;
    for(i=0; i < 3; ++i){
      rgb_val|=(unsigned long)rgb_raw[i+j*3]<<8*i;            // Assemble the long from the read bytes
    }
    lux[j] = rgb_val;
  }
  P6OUT &= ~LS_1;                                             // Turn off LS_1
}

void read_lux_all(long * lux){
  int j=0,i=0;
  unsigned char start_als[2]={LS_MAIN_CTRL,LS_EN},
                start_rgb[2]={LS_MAIN_CTRL,LS_EN|LS_CS_mode},
                start[1]={LS_MAIN_CTRL},
                standby[2] = {LS_MAIN_CTRL,0x00}, 
                status[1] = {LS_MAIN_STATUS},
                resolution[2] = {LS_MEAS_RATE, (LS_RES_18BIT<<4) | (LS_MEAS_100MS) }, 
                gain[2] = {LS_GAIN,LS_GAIN_1},
                als[1] = {LS_ASL_START},
                rgb[1] = {LS_IR_START}; 
  unsigned char rgb_raw[12],als_raw[3];
  unsigned long rgb_val = 0, als_val = 0;

  P6DIR |= LS_1|LS_2|LS_3;                                    // Setup LS pins 
  P6OUT |= LS_1;                                              // Turn on LS_1

  ctl_timeout_wait(ctl_get_current_time()+5);  
  i2c_tx(LS_ADDR,start_als,2);                                // Set up the LS 
  i2c_tx(LS_ADDR,gain,2);
  i2c_tx(LS_ADDR,resolution,2);
  ctl_timeout_wait(ctl_get_current_time()+105);

  i2c_txrx(LS_ADDR,als,1,als_raw,3);                         // Read the ALS value bytes
  for(i=0; i < 3; ++i){
    als_val|=(unsigned long)als_raw[i]<<8*i;                 // Assemble the long from the read bytes
  }
  lux[0] = als_val;
   
  i2c_tx(LS_ADDR,start_rgb,2);                                // Set up the LS 
  ctl_timeout_wait(ctl_get_current_time()+1000);

  i2c_txrx(LS_ADDR,rgb,1,rgb_raw,12);                         // Read the RGB value bytes
  for(j=0; j < 4; ++j){
    rgb_val = 0;
    for(i=0; i < 3; ++i){
      rgb_val|=(unsigned long)rgb_raw[i+j*3]<<8*i;            // Assemble the long from the read bytes
    }
    lux[j+1] = rgb_val;
  }
  P6OUT &= ~LS_1;                                             // Turn off LS_1
}

void read_mag(int * mag){
  
}

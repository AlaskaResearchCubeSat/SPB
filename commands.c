/**********************************************************************************************************************************************
The commands.c file is for commands that will be displayed through the serial terminal. 
In order to add a command you must create a function as seen below.
Then function must be added to the "const CMD_SPEC cmd_tbl[]={{"help"," [command]",helpCmd}" table at the end of the file.
**********************************************************************************************************************************************/
// C libs
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <msp430.h>
#inlcude <UCA1_uart.h>

// ARC2 libs
#include <terminal.h>
#include <commandLib.h>
#include <stdlib.h>
#include <ARCbus.h>
#include <SDlib.h>
#include <i2c.h>

// SPB 
#include <temperature_sensor.h>
#include <luminance_sensor.h>
#include <magnetometer.h>
#include <ltc24xx.h>

//*********************************************************** passing arguments over the terminal *********************************************


/***************************************************************************
* cmd_read_temp
* Reads and displays the temperature values in Celsius for all 7 sensors
***************************************************************************/
int cmd_read_temp(char **argv,unsigned short argc){
  int array[7];
  int ii;

  read_temp_all(array);

  printf("Temperatures: \r\n");
  for(ii = 0; ii < 7; ++ii){
    printf("%d\r\n",array[ii]);
  }  
  return 0;
}

/**************************************************************************
* cmd_read_lux
* Reads and displays the luminance measurements for all 6 sensors
**************************************************************************/
int cmd_read_lux(char **argv,unsigned short argc){
  unsigned long array[5*6];
  int ii,jj;
  setup_lux();

  if(argc == 1){
    read_lux_all_single(array,argv[1][0]); 
    printf("Luminance, IR, Green, Blue, Red: \r\n");
    for(ii = 0; ii < 5; ++ii){
      printf("%lu, ",array[ii]);
    }  
    printf("\r\n");
     
  }else{
    read_lux_all(array);
    printf("Luminance, IR, Green, Blue, Red: \r\n");
    for(jj = 0; jj < 6; ++jj){
      for(ii = 0; ii < 5; ++ii){
        printf("%lu, ",array[ii+jj*5]);
      }  
      printf("\r\n");
    }
  }

  return 0;
}

/**************************************************************************
* cmd_read_lux
* Reads and displays the luminance measurements for all 6 sensors
**************************************************************************/
int cmd_read_mag_single(char **argv,unsigned short argc){
  float meas;
  meas = read_adc(MAG_X_PLUS_ADDR);
  printf("Measurement %f \r\n",meas);
  return 0;
}

/**************************************************************************
* cmd_read_lux
* Reads and displays the luminance measurements for all 6 sensors
**************************************************************************/
int cmd_read_mag(char **argv, unsigned short argc){
  long data[12];
  int ii;

  read_mag_all(data);
  for(ii = 0; ii < 6; ++ii){
    printf("Measurement %ld, %ld \r\n", data[ii*2], data[ii*2 + 1]);
  }

  return 0;
}

/*************************************************************************
* test_spb
*
*************************************************************************/
int test_spb(char **argv, unsigned short argc){
  int ii,ret;
  int temp_data[7];
  unsigned long lux_data[6];
  long mag_data[2];
  char sides[6][4] = {"X+\0", "X-\0", "Y+\0", "Y-\0", "Z+\0", "Z-\0"};
  const unsigned char all_temp_sensors[TEMP_SENSORS]={TEMP_X_PLUS, TEMP_X_MINUS, TEMP_Y_PLUS, TEMP_Y_MINUS, 
                                                      TEMP_Z_PLUS, TEMP_Z_MINUS, TEMP_L_BOARD};
  const unsigned char mag_addrs[6] = {MAG_X_PLUS_ADDR, MAG_X_MINUS_ADDR, MAG_Y_PLUS_ADDR, 
                                      MAG_Y_MINUS_ADDR, MAG_Z_PLUS_ADDR, MAG_Z_MINUS_ADDR};
           

  
  ///////////////////////////////////////////////////////////////////
  printf("Starting sensor check for the SPB... \r\n");

  read_temp_all(temp_data);

  for(ii = 0; ii < 6; ++ii){
    if(temp_data[ii] < 1000){
      printf("Temperature address is: %s \r\n",sides[ii]);
      printf("The Temperature is: %d \r\n",temp_data[ii]);
      printf("Please place your finger on the temperature sensor and then press enter. \r\n");
      while(UCA2_CheckKey()==EOF){}
      read_temp_single(all_temp_sensors[ii],temp_data);
      printf("The Temperature is: %d \r\n",temp_data[0]);
    }
  }
  ///////////////////////////////////////////////////////////////////////
  
  setup_lux();

  read_lux_als(lux_data);
  for(ii = 0; ii < 6; ++ii){
    if(lux_data[ii] != 9999){
      printf("Luminance address is: %s \r\n",sides[ii]);
      printf("The Luminance is: %lu \r\n",lux_data[ii]);
      printf("Please change the light condition on the luminance sensor and then press enter. \r\n");
      while(UCA2_CheckKey()==EOF){}
      read_lux_als_single(lux_data,LS_1);
      printf("The Luminance is: %lu \r\n",lux_data[0]);
    }
  }
  
  //////////////////////////////////////////////////////////////
  
  for(ii = 0; ii < 6; ++ii){
    ret = read_mag_single(mag_addrs[ii],mag_data);
    if(ret == 0){
      printf("Magnetometer address is: %s \r\n",sides[ii]);
      printf("The magnetic field is: %ld, %ld \r\n",mag_data[0],mag_data[1]);
      printf("Please move the magnet near the magnetometer and then press enter. \r\n");
      while(UCA2_CheckKey()==EOF){}
      read_mag_single(mag_addrs[ii],mag_data);
      printf("The magnetic field is: %ld, %ld \r\n",mag_data[0],mag_data[1]);
    }
  }

  return 0;
}





//table of commands with help
const CMD_SPEC cmd_tbl[]={{"help"," [command]",helpCmd},
                   {"read_temp","Read the values from all the temperature sensors",cmd_read_temp},
                   {"read_lux","Read the values from all the luminance sensors",cmd_read_lux},
                   {"read_mag","Read the values from the magnetometer sensor",cmd_read_mag},
                   {"test_spb","Reads all the sensors on the SPB board and says which board was plugged in.",test_spb},

                   ARC_COMMANDS,CTL_COMMANDS,ERROR_COMMANDS,
                   //end of list
                   {NULL,NULL,NULL}};


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

  read_temp(array);

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

int cmd_read_mag(char **argv,unsigned short argc){
  float meas;
  meas = read_adc(MAG_X_PLUS_ADDR);
  printf("Measurement %f \r\n",meas);
  return 0;
}

int cmd_single_sample(char **argv, unsigned short argc){
  long data[2]={0,0};
  single_sample(MAG_X_PLUS_ADDR,data);
  printf("Measurement %ld, %ld \r\n",data[0],data[1]);
  return 0;
}

//**************************************************************************************
int test_ltc24xx(char **argv, unsigned short argc){//command 
  int i2c_ret;
  long temp;
  unsigned char data[3];
  short fail = 0;

  printf("Starting LTC24xx code test: \r\n");
  printf("Testing setting the channel \r\n");
  i2c_ret = set_channel(MAG_X_PLUS_ADDR,LTC24xx_CH_0);            // Pass a correct address
  if(i2c_ret < 0){
    fail = 1;
    printf("Failed setting the channel \r\n");
  }else{
    printf("...passed \r\n");
  }

  i2c_ret = set_channel(0x00,LTC24xx_CH_0);                       // Fail an incorrect address
  if(i2c_ret > 0){
    fail = 1;
    printf("Failed handling i2c error in setting the channel \r\n");
  }else{
    printf("...passed \r\n");
  }

  printf("Testing setting the gain \r\n");
  i2c_ret = set_gain(MAG_X_PLUS_ADDR,LTC24xx_CH_0,LTC24xx_GAIN1); // Pass a correct address
  if(i2c_ret < 0){
    fail = 1;
    printf("Failed setting the gain \r\n");
  }else{
    printf("...passed \r\n");
  }

  i2c_ret = set_gain(0x00,LTC24xx_CH_0,LTC24xx_GAIN1);            // Fail an incorrect address
  if(i2c_ret > 0){
    fail = 1;
    printf("Failed handling i2c error in setting the gain \r\n");
  }else{
    printf("...passed \r\n");
  }

  i2c_ret = set_all_gain(LTC24xx_CH_0,LTC24xx_GAIN1);             // Pass a correct address
  if(i2c_ret < 0){
    fail = 1;
    printf("Failed setting the global gain \r\n");
  }else{
    printf("...passed \r\n");
  }
  
  printf("Testing the convertions \r\n");
  data[0] = 0x00;                                               // min value
  data[1] = 0x00;
  data[2] = 0x00;
  temp = adc_to_long(data); 
  printf("Convertion value: %ld \r\n",temp);
  if(temp != -65536){
    fail = 1;
    printf("         ...Failed\r\n");
  }

  data[0] = 0x00;                                               // min value
  data[1] = 0xFF;
  data[2] = 0xFF;
  temp = adc_to_long(data); 
  printf("Convertion value: %ld \r\n",temp);
  if(temp != -65536){
    fail = 1;
    printf("         ...Failed\r\n");
  }

  data[0] = 0x40;                                               // min value
  data[1] = 0x00;
  data[2] = 0x00;
  temp = adc_to_long(data); 
  printf("Convertion value: %ld \r\n",temp);
  if(temp != -65536){
    fail = 1;
    printf("         ...Failed\r\n");
  }
  data[0] = 0x40;                                               // min value +1
  data[1] = 0x00;
  data[2] = 0x40;
  temp = adc_to_long(data); 
  printf("Convertion value: %ld \r\n",temp);
  if(temp != -65535){
    fail = 1;
    printf("         ...Failed\r\n");
  }

  data[0] = 0xFF;                                               // max value
  data[1] = 0xFF;
  data[2] = 0xFF;
  temp = adc_to_long(data);
  printf("Convertion value: %ld \r\n",temp);
  if(temp != 65536){
    fail = 1;
    printf("         ...Failed\r\n");
  }

  data[0] = 0xC0;                                               // max value
  data[1] = 0x00;
  data[2] = 0x00;
  temp = adc_to_long(data);
  printf("Convertion value: %ld \r\n",temp);
  if(temp != 65536){
    fail = 1;
    printf("         ...Failed\r\n");
  }

  data[0] = 0xBF;                                               // max value -1
  data[1] = 0xFF;
  data[2] = 0xFF;
  temp = adc_to_long(data);
  printf("Convertion value: %ld \r\n",temp);
  if(temp != 65535){
    fail = 1;
    printf("         ...Failed\r\n");
  }

  data[0] = 0x80;                                               // 0
  data[1] = 0x00;
  data[2] = 0x00;
  temp = adc_to_long(data);
  printf("Convertion value: %ld \r\n",temp);
  if(temp != 0){
    fail = 1;
    printf("         ...Failed\r\n");
  }

  data[0] = 0x7F;                                              // -1
  data[1] = 0xFF;
  data[2] = 0xFF;
  temp = adc_to_long(data);
  printf("Convertion value: %ld \r\n",temp);
  if(temp != -1){
    fail = 1;
    printf("         ...Failed\r\n");
  }

  data[0] = 0x80;                                             // 5
  data[1] = 0x01;
  data[2] = 0x40;
  temp = adc_to_long(data);
  printf("Convertion value: %ld \r\n",temp);
  if(temp != 5){
    fail = 1;
    printf("         ...Failed\r\n");
  }
  
  printf("Test read from sensor \r\n");
  temp = read_adc(MAG_X_PLUS_ADDR);                         // valid
  printf("Measured value: %ld \r\n",temp);
  if(temp > 65536 || temp <-65536){
    fail = 1;
    printf("Failed \r\n");
  }

  temp = read_adc(0x00);                                    // invalid
  printf("Measured value: %ld \r\n",temp);
  if(temp != -70000){
    fail = 1;
    printf("Failed \r\n");
  }

  if(fail){
    printf("FAILED, one or more tests have failed.\r\nRead log to determine which test failed. \r\n");
  }else{
    printf("*****************PASSED!**************** \r\n");
  }
  
  return 0;
}



//table of commands with help
const CMD_SPEC cmd_tbl[]={{"help"," [command]",helpCmd},
                   {"read_temp","Read the values from all the temperature sensors",cmd_read_temp},
                   {"read_lux","Read the values from all the luminance sensors",cmd_read_lux},
                   {"single_sample","MAg",cmd_single_sample},
                   {"read_mag","mag",cmd_read_mag},
                   {"test_ltc24xx","test code",test_ltc24xx},

                   ARC_COMMANDS,CTL_COMMANDS,ERROR_COMMANDS,
                   //end of list
                   {NULL,NULL,NULL}};


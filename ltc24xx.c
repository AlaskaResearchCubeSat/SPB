/*******************************************************************************
* LTC24xx firmware 
* 
*******************************************************************************/

#include <ltc24xx.h>
#include <i2c.h>


/*******************************************************************************
* setup_adc
* This is the two bytes that get written to LTC24XX that set the input channel, 
* gain, speed, and rejection ratio or uses the temperature input
* Returns I2C return values
*******************************************************************************/
int setup_adc(short addr, short channel, short enable_2, short gain, short speed, short rejection, short temp_in){
  unsigned char txbuff[2];
  int i2c_ret;
  
  txbuff[0] = LTC24XX_PRE | LTC24XX_EN | channel;
  txbuff[1]= enable_2 | temp_in | rejection | speed | gain;

  i2c_ret = i2c_tx(addr,txbuff,2);
  if(i2c_ret == I2C_ERR_NACK){
    ctl_timeout_wait(ctl_get_current_time()+153);             //conversion is in progress, wait for it to complete, about 150ms
    return  i2c_tx(addr,txbuff,2);
  }
  return i2c_ret;
}

/*******************************************************************************
* set_channel
* chose between channel 0 (0+,1-) and channel 1 (2+,3-)
* Returns I2C return values
*******************************************************************************/
int set_channel(short addr,short channel){
  return setup_adc(addr,channel,0,0,0,0,0);
}

/*******************************************************************************
* set_gain
* chose between channel 0 (0+,1-) and channel 1 (2+,3-)
* to set the gain 
* Returns I2C return values
*******************************************************************************/
int set_gain(short addr,short channel,short gain){
  return setup_adc(addr,channel,LTC24xx_EN2,gain,0,0,0);
}

/*******************************************************************************
* set_all_gain
* chose between channel 0 (0+,1-) and channel 1 (2+,3-)
* and set the gain on all LTC24XX devices
* Returns I2C return values
*******************************************************************************/
int  set_all_gain(short channel,short gain){
  return setup_adc(LTC24XX_GLOBAL_ADDR,channel,LTC24xx_EN2,gain,0,0,0);
}

/*******************************************************************************
* adc_to_long
* convert returned data from 16bit LTC24xx ADC into a signed long integer
*******************************************************************************/
long adc_to_long(unsigned char *dat){
  long val;
  short sig,msb;

  val=(((unsigned long)dat[0])<<16)|(((unsigned long)dat[1])<<8)|((unsigned long)dat[2]); 
  val>>=6;                                                    // Assembling long out of the bits from the ADC
  
  sig=!!(val&(0x20000));                                      // sign bit
  msb=!!(val&(0x10000));                                      // MSB bit

  val&=~0x30000;                                              //remove MSB and sig bits
  
  if(!sig){                                                   //check for negative values
    val|=0xFFFF0000;
  }
  
  if(msb && sig){                                             //check for positive overflow
    return 65536;
  }
  
  if(!msb && !sig && val!=0){                                 //check for negative overflow
    return -65536;
  }

  return val;
}

/*******************************************************************************
* read_adc
* Reads the magnetometer of a given its address
* returns the long integer that is assembled from the registers
* or it will return -70000 for a NACK or -71000 for other I2C errors
*******************************************************************************/
long read_adc(short addr){
  int i2c_ret;
  unsigned char temp[3];

  i2c_ret = i2c_rx(addr,temp,3);
  if(i2c_ret == I2C_ERR_NACK){
    ctl_timeout_wait(ctl_get_current_time()+153);             //conversion is in progress, wait for it to complete, about 150ms
    i2c_ret = i2c_rx(addr,temp,3);
    if(i2c_ret == I2C_ERR_NACK){
      return -70000;                                          //device not responding
    }else if(i2c_ret < 0){
      return -71000;                                          //I2C_ERR_TIMEOUT, I2C_ERR_LEN, I2C_ERR_BUSY_TIMEOUT
    }else{
      return adc_to_long(temp);
    }
  }else if(i2c_ret < 0){
    return -71000;                                            //I2C_ERR_TIMEOUT, I2C_ERR_LEN, I2C_ERR_BUSY_TIMEOUT
  }else{
    return adc_to_long(temp);
  }
}

/*******************************************************************************
* test_ltc24xx
* verifies the functionality of this sensor firmware
* use with the terminal library
*******************************************************************************/
//int test_ltc24xx(char **argv, unsigned short argc){//command 
//  int i2c_ret;
//  long temp;
//  unsigned char data[3];
//  short fail = 0;
//
//  printf("Starting LTC24xx code test: \r\n");
//  printf("Testing setting the channel \r\n");
//  i2c_ret = set_channel(MAG_X_PLUS_ADDR,LTC24xx_CH_0);            // Pass a correct address
//  if(i2c_ret < 0){
//    fail = 1;
//    printf("Failed setting the channel \r\n");
//  }else{
//    printf("...passed \r\n");
//  }
//
//  i2c_ret = set_channel(0x00,LTC24xx_CH_0);                       // Fail an incorrect address
//  if(i2c_ret > 0){
//    fail = 1;
//    printf("Failed handling i2c error in setting the channel \r\n");
//  }else{
//    printf("...passed \r\n");
//  }
//
//  printf("Testing setting the gain \r\n");
//  i2c_ret = set_gain(MAG_X_PLUS_ADDR,LTC24xx_CH_0,LTC24xx_GAIN1); // Pass a correct address
//  if(i2c_ret < 0){
//    fail = 1;
//    printf("Failed setting the gain \r\n");
//  }else{
//    printf("...passed \r\n");
//  }
//
//  i2c_ret = set_gain(0x00,LTC24xx_CH_0,LTC24xx_GAIN1);            // Fail an incorrect address
//  if(i2c_ret > 0){
//    fail = 1;
//    printf("Failed handling i2c error in setting the gain \r\n");
//  }else{
//    printf("...passed \r\n");
//  }
//
//  i2c_ret = set_all_gain(LTC24xx_CH_0,LTC24xx_GAIN1);             // Pass a correct address
//  if(i2c_ret < 0){
//    fail = 1;
//    printf("Failed setting the global gain \r\n");
//  }else{
//    printf("...passed \r\n");
//  }
//  
//  printf("Testing the convertions \r\n");
//  data[0] = 0x00;                                               // min value
//  data[1] = 0x00;
//  data[2] = 0x00;
//  temp = adc_to_long(data); 
//  printf("Convertion value: %ld \r\n",temp);
//  if(temp != -65536){
//    fail = 1;
//    printf("         ...Failed\r\n");
//  }
//
//  data[0] = 0x00;                                               // min value
//  data[1] = 0xFF;
//  data[2] = 0xFF;
//  temp = adc_to_long(data); 
//  printf("Convertion value: %ld \r\n",temp);
//  if(temp != -65536){
//    fail = 1;
//    printf("         ...Failed\r\n");
//  }
//
//  data[0] = 0x40;                                               // min value
//  data[1] = 0x00;
//  data[2] = 0x00;
//  temp = adc_to_long(data); 
//  printf("Convertion value: %ld \r\n",temp);
//  if(temp != -65536){
//    fail = 1;
//    printf("         ...Failed\r\n");
//  }
//  data[0] = 0x40;                                               // min value +1
//  data[1] = 0x00;
//  data[2] = 0x40;
//  temp = adc_to_long(data); 
//  printf("Convertion value: %ld \r\n",temp);
//  if(temp != -65535){
//    fail = 1;
//    printf("         ...Failed\r\n");
//  }
//
//  data[0] = 0xFF;                                               // max value
//  data[1] = 0xFF;
//  data[2] = 0xFF;
//  temp = adc_to_long(data);
//  printf("Convertion value: %ld \r\n",temp);
//  if(temp != 65536){
//    fail = 1;
//    printf("         ...Failed\r\n");
//  }
//
//  data[0] = 0xC0;                                               // max value
//  data[1] = 0x00;
//  data[2] = 0x00;
//  temp = adc_to_long(data);
//  printf("Convertion value: %ld \r\n",temp);
//  if(temp != 65536){
//    fail = 1;
//    printf("         ...Failed\r\n");
//  }
//
//  data[0] = 0xBF;                                               // max value -1
//  data[1] = 0xFF;
//  data[2] = 0xFF;
//  temp = adc_to_long(data);
//  printf("Convertion value: %ld \r\n",temp);
//  if(temp != 65535){
//    fail = 1;
//    printf("         ...Failed\r\n");
//  }
//
//  data[0] = 0x80;                                               // 0
//  data[1] = 0x00;
//  data[2] = 0x00;
//  temp = adc_to_long(data);
//  printf("Convertion value: %ld \r\n",temp);
//  if(temp != 0){
//    fail = 1;
//    printf("         ...Failed\r\n");
//  }
//
//  data[0] = 0x7F;                                              // -1
//  data[1] = 0xFF;
//  data[2] = 0xFF;
//  temp = adc_to_long(data);
//  printf("Convertion value: %ld \r\n",temp);
//  if(temp != -1){
//    fail = 1;
//    printf("         ...Failed\r\n");
//  }
//
//  data[0] = 0x80;                                             // 5
//  data[1] = 0x01;
//  data[2] = 0x40;
//  temp = adc_to_long(data);
//  printf("Convertion value: %ld \r\n",temp);
//  if(temp != 5){
//    fail = 1;
//    printf("         ...Failed\r\n");
//  }
//  
//  printf("Test read from sensor \r\n");
//  temp = read_adc(MAG_X_PLUS_ADDR);                         // valid
//  printf("Measured value: %ld \r\n",temp);
//  if(temp > 65536 || temp <-65536){
//    fail = 1;
//    printf("Failed \r\n");
//  }
//
//  temp = read_adc(0x00);                                    // invalid
//  printf("Measured value: %ld \r\n",temp);
//  if(temp != -70000){
//    fail = 1;
//    printf("Failed \r\n");
//  }
//
//  if(fail){
//    printf("FAILED, one or more tests have failed.\r\nRead log to determine which test failed. \r\n");
//  }else{
//    printf("*****************PASSED!**************** \r\n");
//  }
//  
//  return 0;
//}

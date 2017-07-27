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
* read_adc
* Reads the magnetometer of a given its address
* returns the long integer that is assembled from the registers
* or it will return -70000 for a NACK or -80000 for other I2C errors
*******************************************************************************/
long read_adc(short addr){
  int i2c_ret;
  unsigned char temp[3];
  i2c_ret = i2c_rx(addr,temp,3);
  if(i2c_ret == I2C_ERR_NACK){
    ctl_timeout_wait(ctl_get_current_time()+153);             //conversion is in progress, wait for it to complete, about 150ms
    i2c_ret = i2c_rx(addr,temp,3);
    if(i2c_ret == I2C_ERR_NACK){
      return -70000;
    }else if(i2c_ret < 0){
      return -80000;
    }else{
      return adc_to_long(temp);
    }
  }else if(i2c_ret < 0){
    return -80000;
  }else{
    return adc_to_long(temp);
  }
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

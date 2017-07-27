#include <magnetometer.h>
#include <ltc24xx.h>
#include <i2c.h>
#include <msp430f6779a.h>

CTL_TIME_t adc_ready_time=153;
//gain of magnetomitor amplifier
#define AMP_GAIN    (1)    // V/V
//sensitivity of magnetomitor
#define MAG_SENS    (1e-3)            // mV/V/Gauss


/*******************************************************************************
* ADC2V
* Reads the magnetometer of a given its address
*******************************************************************************/
float ADC2V(long adc){
  return ((float)adc)*3.3/(2*65535.0);
}

/*******************************************************************************
* ADCtoGauss
* Reads the magnetometer of a given its address
*******************************************************************************/
float ADC2Gauss(long adc){
  return  ADC2V(adc)/(AMP_GAIN*MAG_SENS);
}

/*******************************************************************************
* mag_sr
* Pulses the Set/Reset on the magnetometer
*******************************************************************************/
void mag_sr(void){
  MAG_SR_DIR|=MAG_SR_PIN;
  P7DIR|=BIT0;
  MAG_SR_OUT|=MAG_SR_PIN;
  P7OUT|=BIT0;

  ctl_timeout_wait(ctl_get_current_time()+5);
  MAG_SR_OUT&=~MAG_SR_PIN;
  P7OUT &=~BIT0;
}

/*******************************************************************************
* single_sample
* take a reading from the magnetometer ADC
*******************************************************************************/
int single_sample(unsigned short addr,long *dest){
  unsigned char rxbuf[4],txbuf[4];
  int res;

  //ctl_timeout_wait(adc_ready_time);
 
  //meas_LED_on();                                                //turn on LED while measuring
  MAG_SR_OUT|=MAG_SR_PIN;                                       //generate set pulse
  ctl_timeout_wait(ctl_get_current_time()+2);                   //delay for pulse
  
  txbuf[0]=LTC24XX_PRE|LTC24XX_EN|MAG_A_CH;                     //configure for first conversion convert in the A-axis

  txbuf[1]=LTC24xx_EN2|LTC24xx_FA|MAG_ADC_GAIN;
                     
  res=i2c_tx(addr,txbuf,2);                                     //
  if(res<0){
    if(res==I2C_ERR_NACK){      
      ctl_timeout_wait(ctl_get_current_time()+153);             //perhaps a conversion is in progress, wait for it to complete wait about 150ms
      printf("Warning : Failed to setup sensor, return = %d \r\n",res);           //report a warning
      res=i2c_tx(addr,txbuf,2);                                 //try sending again
    }
    if(res<0){
      printf("Error : Failed to setup sensor\r\n");             //report error
      MAG_SR_OUT&=~MAG_SR_PIN;                                  //generate reset pulse
      
      //sens_err_LED_on();                                      //turn on error LED      
     // meas_LED_off();                                         //turn LED off, done measuring
      //TODO : provide real error codes
      return 2;
    }
  }
  ctl_timeout_wait(ctl_get_current_time()+153);                 //wait for conversion to complete wait about 150ms
  txbuf[0]=LTC24XX_PRE|LTC24XX_EN|MAG_B_CH;                     //config for next conversion in the B-axis
  if((res=i2c_txrx(addr,txbuf,1,rxbuf,3))<0){                   //read in data and start next conversion
    
    printf("Error : failed to read sensor data\r\n");           //report error
    MAG_SR_OUT&=~MAG_SR_PIN;                                    //generate reset pulse
    
   // sens_err_LED_on();                                        //turn on error LED 
   // meas_LED_off();                                           //turn LED off, done measuring
    //TODO : provide real error codes
    return 2;
  }
  
  dest[0]=adc_to_long(rxbuf);                                      //save result
  ctl_timeout_wait(ctl_get_current_time()+153);                 //wait for conversion to complete wait about 150ms
  if((res=i2c_rx(addr,rxbuf,3))<0){                             //read in data
    printf("Error : failed to read sensor data\r\n");           //report error
    MAG_SR_OUT&=~MAG_SR_PIN;                                    //generate reset pulse
    
   // sens_err_LED_on();                                        //turn on error LED
   // meas_LED_off();                                           //turn LED off, done measuring
    //TODO : provide real error codes
    return 2;
  } 
  dest[1]=adc_to_long(rxbuf);                                      //save result
   
  MAG_SR_OUT&=~MAG_SR_PIN;                                      //generate reset pulse 
 // meas_LED_off();                                             //turn LED off, done measuring  
  adc_ready_time=ctl_get_current_time()+153;                    //get time that ADC can next be read
  //TODO: provide real return codes
  return 0;
}

/*******************************************************************************
* read_mag
* take a reading from the magnetometer ADC
*******************************************************************************/
int read_mag(unsigned short addr,long *dest){
  unsigned char rxbuf[4],txbuf[4];
  int res;

  MAG_SR_OUT|=MAG_SR_PIN;                                       //generate set pulse
  ctl_timeout_wait(ctl_get_current_time()+2);                   //delay for pulse
  
  set_gain(addr, MAG_A_CH, MAG_ADC_GAIN);
 
  if(res<0){
    if(res==I2C_ERR_NACK){      
      ctl_timeout_wait(ctl_get_current_time()+153);             //perhaps a conversion is in progress, wait for it to complete wait about 150ms
      res=i2c_tx(addr,txbuf,2);                                 //try sending again
    }
    if(res<0){
      MAG_SR_OUT&=~MAG_SR_PIN;                                  //generate reset pulse
      
      //TODO : provide real error codes
      return 2;
    }
  }
  ctl_timeout_wait(ctl_get_current_time()+153);                 //wait for conversion to complete wait about 150ms
  txbuf[0]=LTC24XX_PRE|LTC24XX_EN|MAG_B_CH;                     //config for next conversion in the B-axis
  if((res=i2c_txrx(addr,txbuf,1,rxbuf,3))<0){                   //read in data and start next conversion
    
    MAG_SR_OUT&=~MAG_SR_PIN;                                    //generate reset pulse
                                             
    //TODO : provide real error codes
    return 2;
  }
  
  dest[0]=adc_to_long(rxbuf);                                      //save result
  ctl_timeout_wait(ctl_get_current_time()+153);                 //wait for conversion to complete wait about 150ms
  if((res=i2c_rx(addr,rxbuf,3))<0){                             //read in data
    MAG_SR_OUT&=~MAG_SR_PIN;                                    //generate reset pulse
    
    //TODO : provide real error codes
    return 2;
  } 
  dest[1]=adc_to_long(rxbuf);                                      //save result
   
  MAG_SR_OUT&=~MAG_SR_PIN;                                      //generate reset pulse 
  //TODO: provide real return codes
  return 0;
}
 
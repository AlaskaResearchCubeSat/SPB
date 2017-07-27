#ifndef _MAGNETOMETER_H_INCLUDED
#define _MAGNETOMETER_H_INCLUDED

//Defines for set reset pin
  #define MAG_SR_PIN         BIT6
  #define MAG_SR_OUT         P6OUT
  #define MAG_SR_DIR         P6DIR
  #define MAG_SR_SEL         P6SEL
  #define MAG_SR_REN         P6REN


  #define MAG_A_CH        LTC24xx_CH_1
  #define MAG_B_CH        LTC24xx_CH_0  

  #define MAG_ADC_GAIN     LTC24xx_GAIN1


    //address for X_Minus face
  #define MAG_X_PLUS_ADDR    (0x14)
  #define MAG_X_MINUS_ADDR   (0x16)
  #define MAG_Y_PLUS_ADDR    (0x26)
  #define MAG_Y_MINUS_ADDR   (0x34)
  #define MAG_Z_PLUS_ADDR    (0x25)
  #define MAG_Z_MINUS_ADDR   (0x24)

  void mag_sr(void);
  int single_sample(unsigned short addr, long *dest);


#endif

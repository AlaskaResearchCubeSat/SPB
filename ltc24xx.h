#ifndef _LTC24XX_H_INCLUDED
#define _LTC24XX_H_INCLUDED

#define LTC24XX_EN      0x20
#define LTC24XX_PRE     0x80
#define LTC24xx_SGL     0x10
#define LTC24xx_SIGN    0x08
#define LTC24xx_CH_0    0x00
#define LTC24xx_CH_1    0x01
#define LTC24xx_EN2     0x80
#define LTC24xx_IM      0x40
#define LTC24xx_FA      0x20
#define LTC24xx_FB      0x10
#define LTC24xx_SPD     0x08
#define LTC24xx_GS2     0x04
#define LTC24xx_GS1     0x02
#define LTC24xx_GS0     0x01

#define LTC24xx_GAIN1       (0)
#define LTC24xx_GAIN4       (LTC24xx_GS0)
#define LTC24xx_GAIN8       (LTC24xx_GS1)
#define LTC24xx_GAIN16      (LTC24xx_GS1|LTC24xx_GS0)
#define LTC24xx_GAIN32      (LTC24xx_GS2)
#define LTC24xx_GAIN64      (LTC24xx_GS2|LTC24xx_GS0)
#define LTC24xx_GAIN128     (LTC24xx_GS2|LTC24xx_GS1)
#define LTC24xx_GAIN264     (LTC24xx_GS2|LTC24xx_GS1|LTC24xx_GS0)

//address for all LTC24XX ADC's
#define LTC24XX_GLOBAL_ADDR 0x77

/*******************************************************************************
* setup_adc
* This is the two bytes that get written to LTC24XX that set the input channel, 
* gain, speed, and rejection ratio or uses the temperature input
*******************************************************************************/
int setup_adc(short addr, short channel, short enable_2, short gain, short speed, short rejection, short temp_in);

/*******************************************************************************
* adc2long
* convert returned data from 16bit LTC24xx ADC into a signed long integer
*******************************************************************************/
long adc_to_long(unsigned char *dat);

/*******************************************************************************
* read_adc
* Reads the magnetometer of a given its address
* returns the long integer that is assembled from the registers
* or it will return -70000 for a NACK or -80000 for other I2C errors
*******************************************************************************/
long read_adc(short addr);

/*******************************************************************************
* set_channel
* chose between channel 0 (0+,1-) and channel 1 (2+,3-)
*******************************************************************************/
int set_channel(short addr,short channel);

/*******************************************************************************
* set_gain
* chose between channel 0 (0+,1-) and channel 1 (2+,3-)
* to set the gain 
*******************************************************************************/
int set_gain(short addr,short channel,short gain);

/*******************************************************************************
* set_all_gain
* chose between channel 0 (0+,1-) and channel 1 (2+,3-)
* and set the gain on all LTC24XX devices
*******************************************************************************/
int set_all_gain(short channel,short gain);

#endif
  
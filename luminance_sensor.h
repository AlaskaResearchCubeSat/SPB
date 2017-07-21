#ifndef _LUMINANCE_SENSOR_H
#define _LUMINANCE_SENSOR_H

/************************************************************
* Define luminance addresses and registers
************************************************************/
#define LS_ADDR           0x52

#define LS_1              BIT4
#define LS_2              BIT3
#define LS_3              BIT2 // add more later

#define LS_MAIN_CTRL      0x00
#define LS_PART_ID        0x06
#define LS_MAIN_STATUS    0x07
#define LS_RESET          BIT4
#define LS_CS_mode        BIT2
#define LS_EN             BIT1
#define LS_DATA_STATUS    BIT3

#define LS_MEAS_RATE      0x04
#define LS_RES_20BIT      0x00
#define LS_RES_19BIT      0x01
#define LS_RES_18BIT      0x02 // default
#define LS_RES_17BIT      0x03
#define LS_RES_16BIT      0x04
#define LS_RES_13BIT      0x05

#define LS_MEAS_25MS      0x00
#define LS_MEAS_50MS      0x01
#define LS_MEAS_100MS     0x02 // default
#define LS_MEAS_200MS     0x03
#define LS_MEAS_500MS     0x04
#define LS_MEAS_1000MS    0x05
#define LS_MEAS_2000MS    0x06

#define LS_GAIN           0x05
#define LS_GAIN_1         0x00
#define LS_GAIN_3         0x01 // default
#define LS_GAIN_6         0x02
#define LS_GAIN_9         0x03
#define LS_GAIN_18        0x04

#define LS_ASL_START      0x0D
#define LS_IR_START       0x0A
#define LS_GRN_START      0x0D
#define LS_BLU_START      0x10
#define LS_RED_START      0x13


void spb_setup(void);
void read_lux_als(long * lux);
void read_lux_rgb(long * lux);
void read_lux_all(long * lux);

#endif
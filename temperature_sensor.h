#ifndef _TEMPERATURE_SENSOR_H_INCLUDED
#define _TEMPERATURE_SENSOR_H_INCLUDED

/*************************************************
* Defined temperature addresses
*************************************************/
#define TEMP_SENSORS      7
#define TEMP_X_PLUS       0x48
#define TEMP_X_MINUS      0x4A
#define TEMP_Y_PLUS       0x49
#define TEMP_Y_MINUS      0x4C
#define TEMP_Z_PLUS       0x4E
#define TEMP_Z_MINUS      0x4D
#define TEMP_L_BOARD      0x4F

/************************************************
* Defined temperature registers
************************************************/
#define REG_TEMP_VALUE    0x00
#define REG_CONFIG        0x01
#define REG_TEMP_HYST     0x02
#define REG_TEMP_OIT      0x03

/***********************************************
* Temperature function prototypes
***********************************************/

void setup_temp(void);
void read_temp_single(char addr, int * temp);
void read_temp_all(int * temp);

#endif

#include <temperature_sensor.h>
#include <i2c.h>
#include <msp430f6779a.h>

void setup_temp(void){
  initI2C(4,0,1);
}

void read_temp(int * temp){
  int i;
  short check_value_tx,check_value_rx;
  signed char tmp[2];                                         // Needs to be signed to allow negative temperatures
  const unsigned char temparray[1]={REG_TEMP_VALUE};          // const due to not changing the value, char its a one byte element 
                                                              // this is so I can have my address in memory and create a pointer to point to it for the function
  const unsigned char all_temp_sensors[TEMP_SENSORS]={TEMP_X_PLUS, TEMP_X_MINUS, TEMP_Y_PLUS, TEMP_Y_MINUS, 
                                                      TEMP_Z_PLUS, TEMP_Z_MINUS, TEMP_L_BOARD};

  for (i=0;i<TEMP_SENSORS;++i)                                // Iterate through the temperature sensors 
    {
    check_value_tx = i2c_tx(all_temp_sensors[i],temparray,1); // place the address I want to talk to, 
                                                              // place the pointer to the array that stores my address, specify the number of bytes being sent
      if (check_value_tx==1)
        {
          check_value_rx = i2c_rx(all_temp_sensors[i],(unsigned char *)tmp,2); // place the address I want to talk to,                                                            
          temp[i]=tmp[0];                                    // the array that stores my data, number of bytes being sent
          ctl_timeout_wait(ctl_get_current_time()+1000);
        }
      else if (check_value_tx==0)                             // returns a zero if idle
        {                                                     // I don't think this is ever returned, only viewable as a status
          temp[i]=500;
        }
      else if (check_value_tx == I2C_ERR_NACK)                  // returns a -1 if NACK generated
        {                                                     // no device attached/ connection broken
          temp[i]=1111;
        }
      else if (check_value_tx == I2C_ERR_TIMEOUT)               // returns a -2 if timeout
        {                                                     // device doesn't release the line, or pullups are missing
          temp[i]=2222;
        }
      else if (check_value_tx == I2C_ERR_LEN)                   // returns a -3 in incorrect packet length
        {
          temp[i]=3333;
        }
      else if (check_value_tx == I2C_ERR_BUSY_TIMEOUT)          // returns a -4 if busy waiting for bus
        {                                                     // device doesn't release the line, or pullups are missing
          temp[i]=4444;
        }
      else                                                    // undefined 
        {
          temp[i]=9999;
        }
    }
}

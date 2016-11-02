//===============================================
// MODIFIED AND DESKTOP VERSION
// THIS VERSION SHOULD NOT BE IN THE Z DRIVE
// THIS IS SOLELY FOR TESTING PURPOSES
// ASYNC IMG
//===============================================

#include <msp430.h>
#include <ctl.h>
#include <ARCbus.h>
#include <Error.h>
#include <terminal.h>
#include <UCA3_uart.h>
#include "SDlib.h"
#include "pins.h"
#include "subsystem.h"
//#include "sensor.h"

//==============================================================

  #define saved_settings   ((FLASH_SETTINGS*)0x01000)
  
  #define SAVED_SETTINGS_MAGIC        0xA45F
  typedef struct{
    unsigned short magic;
    //address for bus communication
    unsigned char addr;
    //baud rate settings
    unsigned char br0,br1,mctl,clk;
  } FLASH_SETTINGS;
  
//==============================================================

CTL_TASK_t terminal_task,sub_task;

//stack for terminal
unsigned terminal_stack[2000];
//stack for sub_events
unsigned sub_stack[1000];

//make printf and friends use async
int __putchar(int c)
{
  return UCA3_TxChar(c);
}

//make printf and friends use async
int __getchar(void)
{
  return UCA3_Getc();
}

void main(void)
{
unsigned char addr;
  //DO this first
  ARC_setup(); 

  //turn on LED's this will flash the LED's during startup
  P7OUT=0xFF;
  P7DIR=0xFF;

  //Initialize camera sensor
  sensor_init();

  //TESTING: set log level to report everything by default
  //set_error_level(0);

  //initialize UART
  UCA3_init_UART(UART_PORT,UART_TX_PIN_NUM,UART_RX_PIN_NUM);
  UCA3_BR57600();

  if(saved_settings->magic==SAVED_SETTINGS_MAGIC)
  {
    //check if address is valid
    if(addr&0x7F)
    {
      //get address
      addr=saved_settings->addr;
    }
       
  }
  //setup bus interface
  initARCbus(addr);
  
  mmcInit_msp();

 //initialize stacks
 /*
  memset(terminal_stack,0xcd,sizeof(terminal_stack));  // write known values into the stack
  terminal_stack[0]=terminal_stack[sizeof(terminal_stack)/sizeof(terminal_stack[0])-1]=0xfeed; // put marker values at the words before/after the stack
  
  memset(sub_stack,0xcd,sizeof(sub_stack));  // write known values into the stack
  sub_stack[0]=sub_stack[sizeof(sub_stack)/sizeof(sub_stack[0])-1]=0xfeed; // put marker values at the words before/after the stack
   */ 
  ctl_task_run(&terminal_task,BUS_PRI_LOW,terminal,"Example Bare Bones program ready","terminal",sizeof(terminal_stack)/sizeof(terminal_stack[0])-2,terminal_stack-1,0);
  ctl_task_run(&sub_task,BUS_PRI_HIGH,sub_events,NULL,"SUB_events",sizeof(sub_stack)/sizeof(sub_stack[0])-2,sub_stack-1,0);

  //main loop 
  mainLoop(); 
}




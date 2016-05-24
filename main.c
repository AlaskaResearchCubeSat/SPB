#include <msp430.h>
#include <ctl.h>
#include <ARCbus.h>
#include <Error.h>
#include <terminal.h>
#include <UCA1_uart.h>
#include "pins.h"
#include "subsystem.h"

CTL_TASK_t terminal_task,sub_task;

//stack for terminal
unsigned terminal_stack[2000];
//stack for sub_events
unsigned sub_stack[1000];

//make printf and friends use async
int __putchar(int c){
  return UCA1_TxChar(c);
}

//make printf and friends use async
int __getchar(void){
  return UCA1_Getc();
}



void main(void){
  //turn on LED's this will flash the LED's during startup
  P7OUT=0xFF;
  P7DIR=0xFF;
  //DO this first
  ARC_setup(); 
  //TESTING: set log level to report everything by default
  set_error_level(0);
  //initialize UART
  UCA1_init_UART(UART_PORT,UART_TX_PIN_NUM,UART_RX_PIN_NUM);

  //setup bus interface
  initARCbus(0x1F);
  //init complete turn on LED0 and all others off
  P7OUT=BIT0;

  ctl_task_run(&terminal_task,BUS_PRI_LOW,terminal,"Example Bare Bones program ready","terminal",sizeof(terminal_stack)/sizeof(terminal_stack[0])-2,terminal_stack-1,0);
  ctl_task_run(&sub_task,BUS_PRI_HIGH,sub_events,NULL,"SUB_events",sizeof(sub_stack)/sizeof(sub_stack[0])-2,sub_stack-1,0);

  //main loop 
  mainLoop(); 
}

//decode errors
char *err_decode(char buf[150], unsigned short source,int err, unsigned short argument){
  sprintf(buf,"source = %i, error = %i, argument = %i",source,err,argument);
  return buf;
}


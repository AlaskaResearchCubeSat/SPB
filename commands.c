//===============================================
// MODIFIED AND DESKTOP VERSION
// THIS VERSION SHOULD NOT BE IN THE Z DRIVE
// THIS IS SOLELY FOR TESTING PURPOSES
// ASYNC IMG
//===============================================

#include <msp430.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <ctl.h>
#include <terminal.h>
#include <commandLib.h>
#include <ARCbus.h>
#include <stdlib.h>
#include "pins.h"

int example_command(char **argv,unsigned short argc){
  int i,j;
  printf("This is an example command that shows how arguments are passed to commands.\r\n""The values in the argv array are as follows : \r\n");
  for(i=0;i<=argc;i++){
    printf("argv[%i] = 0x%p\r\n\t""string = \"%s\"\r\n",i,argv[i],argv[i]);
    //print out the string as an array of hex values
    j=0;
    printf("\t""hex = {");
    do{
      //check if this is the first element
      if(j!='\0'){
        //print a space and a comma
        printf(", ");
      }
      //print out value
      printf("0x%02hhX",argv[i][j]);
    }while(argv[i][j++]!='\0');
    //print a closing bracket and couple of newlines
    printf("}\r\n\r\n");
  }
  return 0;
}

int LED(char **argv, unsigned short argc)
{
  printf("Turning LED on\r\n");
  P7OUT=BIT0;
  printf("TUrning LED off\r\n");
  
  return 0;
}

/*
int VidOn(char **argv, unsigned short argc)
{
  printf("Turning video on\r\n");
  if(Adafruit_VC0706_TVon())
  {
      printf("Video on\r\n");
      return 0;
  }else
  {
      printf("Error turning video on\r\n");
      return 1;
  }
}
int VidOff(char **argv, unsigned short argc)
{
  printf("Turning video off\r\n");
  if(Adafruit_VC0706_TVoff())
  {
      printf("Video off\r\n");
      return 0;
  }else
  {
      printf("Error turning video off\r\n");
      return 1;
  }
}

int SDcard(char ** argv, unsigned short argc)
{
  printf("Initializing SD card\r\n");
  if(mmcInit_card())
  {
      printf("SD card initialized\r\n");
      return 0;
  }
  else
  {
      printf("Error initializing SD card\r\n");
      return 1;
  }
}
*/

//ARC_ASYNC_PROXY_COMMAND found in Z:\ARC-2\ARC-2-Software\Libraries\commands\ARCbus_commands.c 
//Approximately starting line 189

//connect to a remote board via async
int asyncProxyCmd(char **argv,unsigned short argc)
{
  //internal events for asyncProxy command
  enum{ASYNC_CMD_EV_RX_ASYNC=1<<0,ASYNC_CMD_EV_RX_UART=1<<1,ASYNC_CMD_EV_CLOSE_ASYNC=1<<2,ASYNC_CMD_EV_ALL=(ASYNC_CMD_EV_RX_ASYNC|ASYNC_CMD_EV_RX_UART|ASYNC_CMD_EV_CLOSE_ASYNC)};
  char c;
  int err;
  CTL_EVENT_SET_t e=0,evt;
  unsigned char addr;
  unsigned char buff[BUS_I2C_CRC_LEN+1+BUS_I2C_HDR_LEN],*ptr;
  if(argc>1)
  {
  printf("Error : %s takes 0 or 1 arguments\r\n",argv[0]);
  return -1;
  }
  if(argc==1)
  {
    addr=getI2C_addr(argv[1],0,busAddrSym);
    if(addr==0xFF)
    {
      return -1;
    }
    //print out address
    printf("Using Address 0x%02X\r\n",addr);
    //check if running with CDH lib
    //try to open async connection
    if((err=async_open(addr)))
    {
      //print error
      printf("Error : opening async\r\n%s\r\n",BUS_error_str(err));
      //return error
      return -2;
    }
    //Tell the user that async is open
    printf("async open use ^C to force quit\r\n");
    //setup events
    async_setup_events(&e,0,ASYNC_CMD_EV_RX_ASYNC);
    UCA1_setup_events(&e,0,ASYNC_CMD_EV_RX_UART);
    async_setup_close_event(&e,ASYNC_CMD_EV_CLOSE_ASYNC);
    for(;;)
    {
      //wait for event
      evt=ctl_events_wait(CTL_EVENT_WAIT_ANY_EVENTS,&e,ASYNC_CMD_EV_ALL,CTL_TIMEOUT_NONE,0);
      //check for char from UART
      if(evt&ASYNC_CMD_EV_RX_UART){
        //get char
        c=UCA1_Getc();
        //check for ^C
        if(c==0x03){
          //close connection
          async_close();
          //print message
          printf("\r\nConnection terminated by user\r\n");
          //exit loop
          break;
        }
        //send char over async
        async_TxChar(c);
      }
      //check for char from async
      if(evt&ASYNC_CMD_EV_RX_ASYNC){
        //get char from async
        c=async_Getc(); 
        //print char to UART
        UCA1_TxChar(c);
      }
      if(evt&ASYNC_CMD_EV_CLOSE_ASYNC){
        //print message
        printf("\r\nconnection closed remotely\r\n");
        //exit loop
        break;
      }
    }
    //stop monitoring events
    async_setup_events(NULL,0,0);
    UCA1_setup_events(NULL,0,0);
    async_setup_close_event(NULL,0);
  }
  else{
    //close async
    err=async_close();
    //check for error
    if(err){
      //print error
      printf("Error : async_close() failed %s\r\n",BUS_error_str(err));
      return -4;
    }
  }
  return 0;
}

//table of commands with help
const CMD_SPEC cmd_tbl[]={{"help"," [command]",helpCmd},
                   //ARC_ASYNC_PROXY_COMMAND,
                   {"ex", "[arg1] [arg2] ...\r\n\t""Example command to show how arguments are passed",example_command},
                   {"VidOn", "[arg1] [arg2] ...\r\n\t" "Turn camera video on", VidOn},
                   {"VidOff", "[arg1] [arg2] ...\r\n\t" "Turn camera video off", VidOff},
                   {"SDcard", "[arg1] [arg2] ...\r\n\t" "Initialize SD card", SDcard},
                   {"async", "[arg1] [arg2] ...\r\n\t" "Initialize async for IMG", asyncProxyCmd},
                   //ARC_COMMANDS,CTL_COMMANDS,ERROR_COMMANDS,
                   //end of list
                   {NULL,NULL,NULL}};


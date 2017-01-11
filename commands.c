#include <msp430.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <terminal.h>
#include <commandLib.h>
#include <stdlib.h>
#include <ARCbus.h>


int example_command(char **argv,unsigned short argc){
  int i,j;
  //TODO replace printf with puts ? 
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

int example_timer_IR(char **argv,unsigned short argc){

  WDTCTL = WDTPW+WDTHOLD;                   // stop WDT
  TA0CTL|=MC_0 ;                             // 
  

//__interrupt void Timer_A(void){
//  P7OUT=BIT7;
//}

  /* AS SET UP IN ARCbus
  //setup timer A to run off 32.768kHz xtal
void init_timerA(void){
    //setup timer A for ADC usage
  //TACTL=TASSEL_1|ID_3|TACLR;
  TACTL=TASSEL_1|ID_0|TACLR;
}

//start timer A in continuous mode
void start_timerA(void){
//start timer A
  TACTL|=MC_2;
} */
  ARC_setup(); // put everything back
  return 0;
}

//table of commands with help
const CMD_SPEC cmd_tbl[]={{"help"," [command]",helpCmd},
                   {"ex","[arg1] [arg2] ...\r\n\t""Example command to show how arguments are passed",example_command},
                   {"timer_IR","[time]...\r\n\tExample command to show how the timer can be used as an interupt",example_timer_IR},
                   ARC_COMMANDS,CTL_COMMANDS,ERROR_COMMANDS,
                   //end of list
                   {NULL,NULL,NULL}};


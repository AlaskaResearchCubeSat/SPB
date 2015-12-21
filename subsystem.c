#include <msp430.h>
#include <ctl.h>
#include <ARCbus.h>
#include <Error.h>
#include <SDlib.h>
#include "pins.h"
#include "subsystem.h"

//handle subsystem spesific commands
int SUB_parseCmd(unsigned char src,unsigned char cmd,unsigned char *dat,unsigned short len){
  switch(cmd){
    default:
      return ERR_UNKNOWN_CMD;
  }
}


//parse subsystem events
void sub_events(void *p) __toplevel{
  unsigned int e,len;
  int i;
  unsigned char buf[10],*ptr;
  extern unsigned char async_addr;
  for(;;){
    e=ctl_events_wait(CTL_EVENT_WAIT_ANY_EVENTS_WITH_AUTO_CLEAR,&SUB_events,SUB_EV_ALL|SUB_EV_ASYNC_OPEN|SUB_EV_ASYNC_CLOSE,CTL_TIMEOUT_NONE,0);
    if(e&SUB_EV_PWR_OFF){
      //print message
      puts("System Powering Down\r");
    }
    if(e&SUB_EV_PWR_ON){
      //print message
      puts("System Powering Up\r");
    }
    if(e&SUB_EV_SEND_STAT){
      //send status
      puts("Sending status\r");
      //setup packet 
      //TODO: put actual command for subsystem response
      ptr=BUS_cmd_init(buf,CMD_EPS_STAT);
      //TODO: fill in telemitry data
      //send command
      BUS_cmd_tx(BUS_ADDR_CDH,buf,0,0,BUS_I2C_SEND_FOREGROUND);
    }
    if(e&SUB_EV_SPI_DAT){
        //get length
        len=arcBus_stat.spi_stat.len;
        switch(arcBus_stat.spi_stat.rx[1]){
          case SPI_ERROR_DAT:
            //print errors
            print_spi_err(arcBus_stat.spi_stat.rx,len);
          break;
          default:
              puts("Unknown SPI data recived:\r");
              //print out data
              for(i=0;i<len+2;i++){
                //printf("0x%02X ",rx[i]);
                printf("%03i ",arcBus_stat.spi_stat.rx[i]);
              }
              printf("\r\n");
        }
        //free buffer
        BUS_free_buffer_from_event();
    }
    if(e&SUB_EV_SPI_ERR_CRC){
      puts("SPI bad CRC\r");
      for(i=0;i<len+2;i++){
        //printf("0x%02X ",rx[i]);
        printf("%03i ",arcBus_stat.spi_stat.rx[i]);
      }
      printf("\r\n");
    }
    if(e&SUB_EV_SPI_ERR_BUSY){
      puts("SPI Busy\r");
    }
    if(e&SUB_EV_ASYNC_OPEN){
      //close async connection, not supported
      async_close();
    }
  }
}

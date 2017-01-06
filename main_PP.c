#line 1 "z:/software/example_bare_bones/main.c"
#line 1 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430.h"

#line 7 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430.h"


























































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































#line 1 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430f6779a.h"

#line 16 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430f6779a.h"








#line 26 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430f6779a.h"



















#line 47 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430f6779a.h"




























#line 1 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/in430.h"













#line 1 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"















#line 20 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"



#line 32 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"
unsigned __bis_SR_register(unsigned mask);
#pragma intrinsic(__bis_SR_register)



#line 47 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"
unsigned __bic_SR_register(unsigned mask);
#pragma intrinsic(__bic_SR_register)



#line 66 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"
unsigned __bis_SR_register_on_exit(unsigned);
#pragma intrinsic(__bis_SR_register_on_exit)



#line 85 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"
unsigned __bic_SR_register_on_exit(unsigned mask);
#pragma intrinsic(__bic_SR_register_on_exit)




#line 99 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"








#line 115 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"








#line 129 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"







#line 142 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"
unsigned __swap_bytes(unsigned x);
#pragma intrinsic(__swap_bytes)



#line 153 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"
unsigned long __swap_words(unsigned long x);
#pragma intrinsic(__swap_words)



#line 164 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"
unsigned long __swap_long_bytes(unsigned long x);
#pragma intrinsic(__swap_long_bytes)



#line 175 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"
unsigned char __bit_reverse_char(unsigned char x);
#pragma intrinsic(__bit_reverse_char)



#line 186 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"
unsigned short __bit_reverse_short(unsigned int x);
#pragma intrinsic(__bit_reverse_short)



#line 197 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"
unsigned long __bit_reverse_long(unsigned long x);
#pragma intrinsic(__bit_reverse_long)



#line 208 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"
unsigned long long __bit_reverse_long_long(unsigned long long x);
#pragma intrinsic(__bit_reverse_long_long)



#line 219 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"
int __bit_count_leading_zeros_char(unsigned char x);
#pragma intrinsic(__bit_count_leading_zeros_char)



#line 230 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"
int __bit_count_leading_zeros_short(unsigned short x);
#pragma intrinsic(__bit_count_leading_zeros_short)



#line 241 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"
int __bit_count_leading_zeros_long(unsigned long x);
#pragma intrinsic(__bit_count_leading_zeros_long)



#line 252 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"
int __bit_count_leading_zeros_long_long(unsigned long long x);
#pragma intrinsic(__bit_count_leading_zeros_long_long)



#line 272 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"
void __set_register(unsigned reg, unsigned value);
#pragma intrinsic(__set_register)



#line 284 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"
unsigned __get_register(unsigned reg);
#pragma intrinsic(__get_register)



#line 296 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"
unsigned __bcd_add_short(unsigned x, unsigned y);
#pragma intrinsic(__bcd_add_short)



#line 308 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"
unsigned long __bcd_add_long(unsigned long x, unsigned long y);
#pragma intrinsic(__bcd_add_long)



#line 320 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"
unsigned long long __bcd_add_long_long(unsigned long long x, unsigned long long y);
#pragma intrinsic(__bcd_add_long_long)



#line 332 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"
unsigned __bcd_subtract_short(unsigned x, unsigned y);
#pragma intrinsic(__bcd_subtract_short)



#line 344 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"
unsigned long __bcd_subtract_long(unsigned long x, unsigned long y);
#pragma intrinsic(__bcd_subtract_long)



#line 356 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"
unsigned long long __bcd_subtract_long_long(unsigned long long x, unsigned long long y);
#pragma intrinsic(__bcd_subtract_long_long)



#line 368 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"
unsigned __bcd_negate_short(unsigned x);
#pragma intrinsic(__bcd_negate_short)



#line 380 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"
unsigned long __bcd_negate_long(unsigned long x);
#pragma intrinsic(__bcd_negate_long)



#line 392 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"
unsigned long long __bcd_negate_long_long(unsigned long long x);
#pragma intrinsic(__bcd_negate_long_long)



#line 403 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"
void __delay_cycles(unsigned long n);
#pragma intrinsic(__delay_cycles)




#line 415 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"








#line 430 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"








#line 445 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"








#line 460 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"








#line 474 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"








#line 492 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"







#line 506 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"
void __insert_opcode(const unsigned op);
#pragma intrinsic(__insert_opcode)




#line 517 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"







#line 530 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"
unsigned __read_extended_byte(unsigned long addr);



#line 540 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"
unsigned __read_extended_word(unsigned long addr);



#line 550 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"
unsigned long __read_extended_long(unsigned long addr);



#line 560 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"
void __write_extended_byte(unsigned long addr, unsigned value);



#line 570 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"
void __write_extended_word(unsigned long addr, unsigned value);



#line 580 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"
void __write_extended_long(unsigned long addr, unsigned long value);




#line 588 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"






#line 15 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/in430.h"



#line 22 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/in430.h"




#line 29 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/in430.h"




#line 36 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/in430.h"




#line 43 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/in430.h"




#line 50 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/in430.h"




#line 57 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/in430.h"




#line 64 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/in430.h"




#line 71 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/in430.h"




#line 78 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/in430.h"




#line 85 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/in430.h"




#line 92 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/in430.h"




#line 99 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/in430.h"




#line 106 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/in430.h"




#line 113 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/in430.h"




#line 120 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/in430.h"




#line 127 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/in430.h"




#line 134 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/in430.h"




#line 141 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/in430.h"




#line 148 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/in430.h"




#line 155 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/in430.h"




#line 162 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/in430.h"




#pragma intrinsic(_H16)
unsigned _H16(unsigned long);

#pragma intrinsic(_L16)
unsigned _L16(unsigned long);

#pragma intrinsic(_H32)
unsigned long _H32(unsigned long long);

#pragma intrinsic(_L32)
unsigned long _L32(unsigned long long);

#pragma intrinsic(_HH16)
unsigned _HH16(unsigned long long);

#pragma intrinsic(_LL16)
unsigned _LL16(unsigned long long);




#line 76 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430f6779a.h"














#line 92 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430f6779a.h"




#line 98 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430f6779a.h"



#line 103 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430f6779a.h"





sfrb ADC10CTL0_L          =(0x0740);
sfrb ADC10CTL0_H          =(0x0740)+1;
sfrw ADC10CTL0            =(0x0740);

sfrb ADC10CTL1_L          =(0x0742);
sfrb ADC10CTL1_H          =(0x0742)+1;
sfrw ADC10CTL1            =(0x0742);

sfrb ADC10CTL2_L          =(0x0744);
sfrb ADC10CTL2_H          =(0x0744)+1;
sfrw ADC10CTL2            =(0x0744);

sfrb ADC10LO_L            =(0x0746);
sfrb ADC10LO_H            =(0x0746)+1;
sfrw ADC10LO              =(0x0746);

sfrb ADC10HI_L            =(0x0748);
sfrb ADC10HI_H            =(0x0748)+1;
sfrw ADC10HI              =(0x0748);

sfrb ADC10MCTL0_L         =(0x074A);
sfrb ADC10MCTL0_H         =(0x074A)+1;
sfrw ADC10MCTL0           =(0x074A);

sfrb ADC10MEM0_L          =(0x0752);
sfrb ADC10MEM0_H          =(0x0752)+1;
sfrw ADC10MEM0            =(0x0752);

sfrb ADC10IE_L            =(0x075A);
sfrb ADC10IE_H            =(0x075A)+1;
sfrw ADC10IE              =(0x075A);

sfrb ADC10IFG_L           =(0x075C);
sfrb ADC10IFG_H           =(0x075C)+1;
sfrw ADC10IFG             =(0x075C);

sfrb ADC10IV_L            =(0x075E);
sfrb ADC10IV_H            =(0x075E)+1;
sfrw ADC10IV              =(0x075E);


















































































































































































































#line 359 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430f6779a.h"





sfrb AESACTL0_L           =(0x09C0);
sfrb AESACTL0_H           =(0x09C0)+1;
sfrw AESACTL0             =(0x09C0);

sfrb AESASTAT_L           =(0x09C4);
sfrb AESASTAT_H           =(0x09C4)+1;
sfrw AESASTAT             =(0x09C4);

sfrb AESAKEY_L            =(0x09C6);
sfrb AESAKEY_H            =(0x09C6)+1;
sfrw AESAKEY              =(0x09C6);

sfrb AESADIN_L            =(0x09C8);
sfrb AESADIN_H            =(0x09C8)+1;
sfrw AESADIN              =(0x09C8);

sfrb AESADOUT_L           =(0x09CA);
sfrb AESADOUT_H           =(0x09CA)+1;
sfrw AESADOUT             =(0x09CA);

































































#line 450 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430f6779a.h"





sfrb AUXCTL0_L            =(0x09E0);
sfrb AUXCTL0_H            =(0x09E0)+1;
sfrw AUXCTL0              =(0x09E0);

sfrb AUXCTL1_L            =(0x09E2);
sfrb AUXCTL1_H            =(0x09E2)+1;
sfrw AUXCTL1              =(0x09E2);

sfrb AUXCTL2_L            =(0x09E4);
sfrb AUXCTL2_H            =(0x09E4)+1;
sfrw AUXCTL2              =(0x09E4);


sfrb AUX2CHCTL_L          =(0x09F2);
sfrb AUX2CHCTL_H          =(0x09F2)+1;
sfrw AUX2CHCTL            =(0x09F2);

sfrb AUX3CHCTL_L          =(0x09F4);
sfrb AUX3CHCTL_H          =(0x09F4)+1;
sfrw AUX3CHCTL            =(0x09F4);

sfrb AUXADCCTL_L          =(0x09F6);
sfrb AUXADCCTL_H          =(0x09F6)+1;
sfrw AUXADCCTL            =(0x09F6);

sfrb AUXIFG_L             =(0x09FA);
sfrb AUXIFG_H             =(0x09FA)+1;
sfrw AUXIFG               =(0x09FA);

sfrb AUXIE_L              =(0x09FC);
sfrb AUXIE_H              =(0x09FC)+1;
sfrw AUXIE                =(0x09FC);

sfrb AUXIV_L              =(0x09FE);
sfrb AUXIV_H              =(0x09FE)+1;
sfrw AUXIV                =(0x09FE);




























































































































































































































#line 713 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430f6779a.h"





sfrb BAKMEM0_L            =(0x0480);
sfrb BAKMEM0_H            =(0x0480)+1;
sfrw BAKMEM0              =(0x0480);

sfrb BAKMEM1_L            =(0x0482);
sfrb BAKMEM1_H            =(0x0482)+1;
sfrw BAKMEM1              =(0x0482);

sfrb BAKMEM2_L            =(0x0484);
sfrb BAKMEM2_H            =(0x0484)+1;
sfrw BAKMEM2              =(0x0484);

sfrb BAKMEM3_L            =(0x0486);
sfrb BAKMEM3_H            =(0x0486)+1;
sfrw BAKMEM3              =(0x0486);


#line 737 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430f6779a.h"





sfrb CBCTL0_L             =(0x08C0);
sfrb CBCTL0_H             =(0x08C0)+1;
sfrw CBCTL0               =(0x08C0);

sfrb CBCTL1_L             =(0x08C2);
sfrb CBCTL1_H             =(0x08C2)+1;
sfrw CBCTL1               =(0x08C2);

sfrb CBCTL2_L             =(0x08C4);
sfrb CBCTL2_H             =(0x08C4)+1;
sfrw CBCTL2               =(0x08C4);

sfrb CBCTL3_L             =(0x08C6);
sfrb CBCTL3_H             =(0x08C6)+1;
sfrw CBCTL3               =(0x08C6);

sfrb CBINT_L              =(0x08CC);
sfrb CBINT_H              =(0x08CC)+1;
sfrw CBINT                =(0x08CC);

sfrw     CBIV                 =(0x08CE);



















































































































































































































































































































































#line 1104 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430f6779a.h"





sfrb CRCDI_L              =(0x0150);
sfrb CRCDI_H              =(0x0150)+1;
sfrw CRCDI                =(0x0150);

sfrb CRCDIRB_L            =(0x0152);
sfrb CRCDIRB_H            =(0x0152)+1;
sfrw CRCDIRB              =(0x0152);

sfrb CRCINIRES_L          =(0x0154);
sfrb CRCINIRES_H          =(0x0154)+1;
sfrw CRCINIRES            =(0x0154);

sfrb CRCRESR_L            =(0x0156);
sfrb CRCRESR_H            =(0x0156)+1;
sfrw CRCRESR              =(0x0156);


#line 1128 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430f6779a.h"





sfrb DMACTL0_L            =(0x0500);
sfrb DMACTL0_H            =(0x0500)+1;
sfrw DMACTL0              =(0x0500);

sfrb DMACTL1_L            =(0x0502);
sfrb DMACTL1_H            =(0x0502)+1;
sfrw DMACTL1              =(0x0502);

sfrb DMACTL2_L            =(0x0504);
sfrb DMACTL2_H            =(0x0504)+1;
sfrw DMACTL2              =(0x0504);

sfrb DMACTL3_L            =(0x0506);
sfrb DMACTL3_H            =(0x0506)+1;
sfrw DMACTL3              =(0x0506);

sfrb DMACTL4_L            =(0x0508);
sfrb DMACTL4_H            =(0x0508)+1;
sfrw DMACTL4              =(0x0508);

sfrb DMAIV_L              =(0x050E);
sfrb DMAIV_H              =(0x050E)+1;
sfrw DMAIV                =(0x050E);


sfrb DMA0CTL_L            =(0x0510);
sfrb DMA0CTL_H            =(0x0510)+1;
sfrw DMA0CTL              =(0x0510);

sfra     DMA0SA               =(0x0512);

sfra     DMA0DA               =(0x0516);

sfrw     DMA0SZ               =(0x051A);


sfrb DMA1CTL_L            =(0x0520);
sfrb DMA1CTL_H            =(0x0520)+1;
sfrw DMA1CTL              =(0x0520);

sfra     DMA1SA               =(0x0522);

sfra     DMA1DA               =(0x0526);

sfrw     DMA1SZ               =(0x052A);


sfrb DMA2CTL_L            =(0x0530);
sfrb DMA2CTL_H            =(0x0530)+1;
sfrw DMA2CTL              =(0x0530);

sfra     DMA2SA               =(0x0532);

sfra     DMA2DA               =(0x0536);

sfrw     DMA2SZ               =(0x053A);































































































































































































































































































































#line 1510 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430f6779a.h"





sfrb FCTL1_L              =(0x0140);
sfrb FCTL1_H              =(0x0140)+1;
sfrw FCTL1                =(0x0140);


sfrb FCTL3_L              =(0x0144);
sfrb FCTL3_H              =(0x0144)+1;
sfrw FCTL3                =(0x0144);

sfrb FCTL4_L              =(0x0146);
sfrb FCTL4_H              =(0x0146)+1;
sfrw FCTL4                =(0x0146);
































































#line 1593 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430f6779a.h"





sfrb LCDCCTL0_L           =(0x0A00);
sfrb LCDCCTL0_H           =(0x0A00)+1;
sfrw LCDCCTL0             =(0x0A00);

sfrb LCDCCTL1_L           =(0x0A02);
sfrb LCDCCTL1_H           =(0x0A02)+1;
sfrw LCDCCTL1             =(0x0A02);

sfrb LCDCBLKCTL_L         =(0x0A04);
sfrb LCDCBLKCTL_H         =(0x0A04)+1;
sfrw LCDCBLKCTL           =(0x0A04);

sfrb LCDCMEMCTL_L         =(0x0A06);
sfrb LCDCMEMCTL_H         =(0x0A06)+1;
sfrw LCDCMEMCTL           =(0x0A06);

sfrb LCDCVCTL_L           =(0x0A08);
sfrb LCDCVCTL_H           =(0x0A08)+1;
sfrw LCDCVCTL             =(0x0A08);

sfrb LCDCPCTL0_L          =(0x0A0A);
sfrb LCDCPCTL0_H          =(0x0A0A)+1;
sfrw LCDCPCTL0            =(0x0A0A);

sfrb LCDCPCTL1_L          =(0x0A0C);
sfrb LCDCPCTL1_H          =(0x0A0C)+1;
sfrw LCDCPCTL1            =(0x0A0C);

sfrb LCDCPCTL2_L          =(0x0A0E);
sfrb LCDCPCTL2_H          =(0x0A0E)+1;
sfrw LCDCPCTL2            =(0x0A0E);

sfrb LCDCCPCTL_L          =(0x0A12);
sfrb LCDCCPCTL_H          =(0x0A12)+1;
sfrw LCDCCPCTL            =(0x0A12);

sfrw    LCDCIV               =(0x0A1E);


























































































































































































































































































































































































































































sfrb    LCDM1                =(0x0A20);







sfrb    LCDM2                =(0x0A21);

sfrb    LCDM3                =(0x0A22);

sfrb    LCDM4                =(0x0A23);

sfrb    LCDM5                =(0x0A24);

sfrb    LCDM6                =(0x0A25);

sfrb    LCDM7                =(0x0A26);

sfrb    LCDM8                =(0x0A27);

sfrb    LCDM9                =(0x0A28);

sfrb    LCDM10               =(0x0A29);

sfrb    LCDM11               =(0x0A2A);

sfrb    LCDM12               =(0x0A2B);

sfrb    LCDM13               =(0x0A2C);

sfrb    LCDM14               =(0x0A2D);

sfrb    LCDM15               =(0x0A2E);

sfrb    LCDM16               =(0x0A2F);

sfrb    LCDM17               =(0x0A30);

sfrb    LCDM18               =(0x0A31);

sfrb    LCDM19               =(0x0A32);

sfrb    LCDM20               =(0x0A33);

sfrb    LCDM21               =(0x0A34);

sfrb    LCDM22               =(0x0A35);

sfrb    LCDM23               =(0x0A36);

sfrb    LCDM24               =(0x0A37);

sfrb    LCDM25               =(0x0A38);

sfrb    LCDM26               =(0x0A39);

sfrb    LCDM27               =(0x0A3A);

sfrb    LCDM28               =(0x0A3B);

sfrb    LCDM29               =(0x0A3C);

sfrb    LCDM30               =(0x0A3D);

sfrb    LCDM31               =(0x0A3E);

sfrb    LCDM32               =(0x0A3F);

sfrb    LCDM33               =(0x0A40);

sfrb    LCDM34               =(0x0A41);

sfrb    LCDM35               =(0x0A42);

sfrb    LCDM36               =(0x0A43);

sfrb    LCDM37               =(0x0A44);

sfrb    LCDM38               =(0x0A45);

sfrb    LCDM39               =(0x0A46);

sfrb    LCDM40               =(0x0A47);


sfrb    LCDBM1               =(0x0A40);







sfrb    LCDBM2               =(0x0A41);

sfrb    LCDBM3               =(0x0A42);

sfrb    LCDBM4               =(0x0A43);

sfrb    LCDBM5               =(0x0A44);

sfrb    LCDBM6               =(0x0A45);

sfrb    LCDBM7               =(0x0A46);

sfrb    LCDBM8               =(0x0A47);

sfrb    LCDBM9               =(0x0A48);

sfrb    LCDBM10              =(0x0A49);

sfrb    LCDBM11              =(0x0A4A);

sfrb    LCDBM12              =(0x0A4B);

sfrb    LCDBM13              =(0x0A4C);

sfrb    LCDBM14              =(0x0A4D);

sfrb    LCDBM15              =(0x0A4E);

sfrb    LCDBM16              =(0x0A4F);

sfrb    LCDBM17              =(0x0A50);

sfrb    LCDBM18              =(0x0A51);

sfrb    LCDBM19              =(0x0A52);

sfrb    LCDBM20              =(0x0A53);









#line 2220 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430f6779a.h"





sfrb MPY_L                =(0x04C0);
sfrb MPY_H                =(0x04C0)+1;
sfrw MPY                  =(0x04C0);

sfrb MPYS_L               =(0x04C2);
sfrb MPYS_H               =(0x04C2)+1;
sfrw MPYS                 =(0x04C2);

sfrb MAC_L                =(0x04C4);
sfrb MAC_H                =(0x04C4)+1;
sfrw MAC                  =(0x04C4);

sfrb MACS_L               =(0x04C6);
sfrb MACS_H               =(0x04C6)+1;
sfrw MACS                 =(0x04C6);

sfrb OP2_L                =(0x04C8);
sfrb OP2_H                =(0x04C8)+1;
sfrw OP2                  =(0x04C8);

sfrb RESLO_L              =(0x04CA);
sfrb RESLO_H              =(0x04CA)+1;
sfrw RESLO                =(0x04CA);

sfrb RESHI_L              =(0x04CC);
sfrb RESHI_H              =(0x04CC)+1;
sfrw RESHI                =(0x04CC);

const sfrb SUMEXT_L       =(0x04CE);
const sfrb SUMEXT_H       =(0x04CE)+1;
const sfrw SUMEXT         =(0x04CE);


sfrb MPY32L_L             =(0x04D0);
sfrb MPY32L_H             =(0x04D0)+1;
sfrw MPY32L               =(0x04D0);

sfrb MPY32H_L             =(0x04D2);
sfrb MPY32H_H             =(0x04D2)+1;
sfrw MPY32H               =(0x04D2);

sfrb MPYS32L_L            =(0x04D4);
sfrb MPYS32L_H            =(0x04D4)+1;
sfrw MPYS32L              =(0x04D4);

sfrb MPYS32H_L            =(0x04D6);
sfrb MPYS32H_H            =(0x04D6)+1;
sfrw MPYS32H              =(0x04D6);

sfrb MAC32L_L             =(0x04D8);
sfrb MAC32L_H             =(0x04D8)+1;
sfrw MAC32L               =(0x04D8);

sfrb MAC32H_L             =(0x04DA);
sfrb MAC32H_H             =(0x04DA)+1;
sfrw MAC32H               =(0x04DA);

sfrb MACS32L_L            =(0x04DC);
sfrb MACS32L_H            =(0x04DC)+1;
sfrw MACS32L              =(0x04DC);

sfrb MACS32H_L            =(0x04DE);
sfrb MACS32H_H            =(0x04DE)+1;
sfrw MACS32H              =(0x04DE);

sfrb OP2L_L               =(0x04E0);
sfrb OP2L_H               =(0x04E0)+1;
sfrw OP2L                 =(0x04E0);

sfrb OP2H_L               =(0x04E2);
sfrb OP2H_H               =(0x04E2)+1;
sfrw OP2H                 =(0x04E2);

sfrb RES0_L               =(0x04E4);
sfrb RES0_H               =(0x04E4)+1;
sfrw RES0                 =(0x04E4);

sfrb RES1_L               =(0x04E6);
sfrb RES1_H               =(0x04E6)+1;
sfrw RES1                 =(0x04E6);

sfrb RES2_L               =(0x04E8);
sfrb RES2_H               =(0x04E8)+1;
sfrw RES2                 =(0x04E8);

sfrb RES3_L               =(0x04EA);
sfrb RES3_H               =(0x04EA)+1;
sfrw RES3                 =(0x04EA);

sfrb MPY32CTL0_L          =(0x04EC);
sfrb MPY32CTL0_H          =(0x04EC)+1;
sfrw MPY32CTL0            =(0x04EC);























































#line 2374 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430f6779a.h"

















const sfrb PAIN_L         =(0x0200);
const sfrb PAIN_H         =(0x0200)+1;
const sfrw PAIN           =(0x0200);

sfrb PAOUT_L              =(0x0202);
sfrb PAOUT_H              =(0x0202)+1;
sfrw PAOUT                =(0x0202);

sfrb PADIR_L              =(0x0204);
sfrb PADIR_H              =(0x0204)+1;
sfrw PADIR                =(0x0204);

sfrb PAREN_L              =(0x0206);
sfrb PAREN_H              =(0x0206)+1;
sfrw PAREN                =(0x0206);

sfrb PADS_L               =(0x0208);
sfrb PADS_H               =(0x0208)+1;
sfrw PADS                 =(0x0208);

sfrb PASEL0_L             =(0x020A);
sfrb PASEL0_H             =(0x020A)+1;
sfrw PASEL0               =(0x020A);

sfrb PASEL1_L             =(0x020C);
sfrb PASEL1_H             =(0x020C)+1;
sfrw PASEL1               =(0x020C);

sfrb PAIES_L              =(0x0218);
sfrb PAIES_H              =(0x0218)+1;
sfrw PAIES                =(0x0218);

sfrb PAIE_L               =(0x021A);
sfrb PAIE_H               =(0x021A)+1;
sfrw PAIE                 =(0x021A);

sfrb PAIFG_L              =(0x021C);
sfrb PAIFG_H              =(0x021C)+1;
sfrw PAIFG                =(0x021C);
























sfrw    P1IV                 =(0x020E);

sfrw    P2IV                 =(0x021E);
















































#line 2507 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430f6779a.h"














const sfrb PBIN_L         =(0x0220);
const sfrb PBIN_H         =(0x0220)+1;
const sfrw PBIN           =(0x0220);

sfrb PBOUT_L              =(0x0222);
sfrb PBOUT_H              =(0x0222)+1;
sfrw PBOUT                =(0x0222);

sfrb PBDIR_L              =(0x0224);
sfrb PBDIR_H              =(0x0224)+1;
sfrw PBDIR                =(0x0224);

sfrb PBREN_L              =(0x0226);
sfrb PBREN_H              =(0x0226)+1;
sfrw PBREN                =(0x0226);

sfrb PBDS_L               =(0x0228);
sfrb PBDS_H               =(0x0228)+1;
sfrw PBDS                 =(0x0228);

sfrb PBSEL0_L             =(0x022A);
sfrb PBSEL0_H             =(0x022A)+1;
sfrw PBSEL0               =(0x022A);
































#line 2578 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430f6779a.h"

















const sfrb PCIN_L         =(0x0240);
const sfrb PCIN_H         =(0x0240)+1;
const sfrw PCIN           =(0x0240);

sfrb PCOUT_L              =(0x0242);
sfrb PCOUT_H              =(0x0242)+1;
sfrw PCOUT                =(0x0242);

sfrb PCDIR_L              =(0x0244);
sfrb PCDIR_H              =(0x0244)+1;
sfrw PCDIR                =(0x0244);

sfrb PCREN_L              =(0x0246);
sfrb PCREN_H              =(0x0246)+1;
sfrw PCREN                =(0x0246);

sfrb PCDS_L               =(0x0248);
sfrb PCDS_H               =(0x0248)+1;
sfrw PCDS                 =(0x0248);

sfrb PCSEL0_L             =(0x024A);
sfrb PCSEL0_H             =(0x024A)+1;
sfrw PCSEL0               =(0x024A);

sfrb PCSEL1_L             =(0x024C);
sfrb PCSEL1_H             =(0x024C)+1;
sfrw PCSEL1               =(0x024C);




































#line 2660 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430f6779a.h"














const sfrb PDIN_L         =(0x0260);
const sfrb PDIN_H         =(0x0260)+1;
const sfrw PDIN           =(0x0260);

sfrb PDOUT_L              =(0x0262);
sfrb PDOUT_H              =(0x0262)+1;
sfrw PDOUT                =(0x0262);

sfrb PDDIR_L              =(0x0264);
sfrb PDDIR_H              =(0x0264)+1;
sfrw PDDIR                =(0x0264);

sfrb PDREN_L              =(0x0266);
sfrb PDREN_H              =(0x0266)+1;
sfrw PDREN                =(0x0266);

sfrb PDDS_L               =(0x0268);
sfrb PDDS_H               =(0x0268)+1;
sfrw PDDS                 =(0x0268);

sfrb PDSEL0_L             =(0x026A);
sfrb PDSEL0_H             =(0x026A)+1;
sfrw PDSEL0               =(0x026A);
































#line 2731 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430f6779a.h"














const sfrb PEIN_L         =(0x0280);
const sfrb PEIN_H         =(0x0280)+1;
const sfrw PEIN           =(0x0280);

sfrb PEOUT_L              =(0x0282);
sfrb PEOUT_H              =(0x0282)+1;
sfrw PEOUT                =(0x0282);

sfrb PEDIR_L              =(0x0284);
sfrb PEDIR_H              =(0x0284)+1;
sfrw PEDIR                =(0x0284);

sfrb PEREN_L              =(0x0286);
sfrb PEREN_H              =(0x0286)+1;
sfrw PEREN                =(0x0286);

sfrb PEDS_L               =(0x0288);
sfrb PEDS_H               =(0x0288)+1;
sfrw PEDS                 =(0x0288);

sfrb PESEL0_L             =(0x028A);
sfrb PESEL0_H             =(0x028A)+1;
sfrw PESEL0               =(0x028A);
































#line 2802 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430f6779a.h"










const sfrb PFIN_L         =(0x02A0);
const sfrb PFIN_H         =(0x02A0)+1;
const sfrw PFIN           =(0x02A0);

sfrb PFOUT_L              =(0x02A2);
sfrb PFOUT_H              =(0x02A2)+1;
sfrw PFOUT                =(0x02A2);

sfrb PFDIR_L              =(0x02A4);
sfrb PFDIR_H              =(0x02A4)+1;
sfrw PFDIR                =(0x02A4);

sfrb PFREN_L              =(0x02A6);
sfrb PFREN_H              =(0x02A6)+1;
sfrw PFREN                =(0x02A6);

sfrb PFDS_L               =(0x02A8);
sfrb PFDS_H               =(0x02A8)+1;
sfrw PFDS                 =(0x02A8);

sfrb PFSEL0_L             =(0x02AA);
sfrb PFSEL0_H             =(0x02AA)+1;
sfrw PFSEL0               =(0x02AA);

























#line 2862 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430f6779a.h"






const sfrb PJIN_L         =(0x0320);
const sfrb PJIN_H         =(0x0320)+1;
const sfrw PJIN           =(0x0320);

sfrb PJOUT_L              =(0x0322);
sfrb PJOUT_H              =(0x0322)+1;
sfrw PJOUT                =(0x0322);

sfrb PJDIR_L              =(0x0324);
sfrb PJDIR_H              =(0x0324)+1;
sfrw PJDIR                =(0x0324);

sfrb PJREN_L              =(0x0326);
sfrb PJREN_H              =(0x0326)+1;
sfrw PJREN                =(0x0326);

sfrb PJDS_L               =(0x0328);
sfrb PJDS_H               =(0x0328)+1;
sfrw PJDS                 =(0x0328);

sfrb PJSEL_L              =(0x032A);
sfrb PJSEL_H              =(0x032A)+1;
sfrw PJSEL                =(0x032A);














#line 2907 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430f6779a.h"





sfrb PMAPKEYID_L          =(0x01C0);
sfrb PMAPKEYID_H          =(0x01C0)+1;
sfrw PMAPKEYID            =(0x01C0);

sfrb PMAPCTL_L            =(0x01C2);
sfrb PMAPCTL_H            =(0x01C2)+1;
sfrw PMAPCTL              =(0x01C2);















#line 2936 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430f6779a.h"





sfrb P2MAP01_L            =(0x01D0);
sfrb P2MAP01_H            =(0x01D0)+1;
sfrw P2MAP01              =(0x01D0);

sfrb P2MAP23_L            =(0x01D2);
sfrb P2MAP23_H            =(0x01D2)+1;
sfrw P2MAP23              =(0x01D2);

sfrb P2MAP45_L            =(0x01D4);
sfrb P2MAP45_H            =(0x01D4)+1;
sfrw P2MAP45              =(0x01D4);

sfrb P2MAP67_L            =(0x01D6);
sfrb P2MAP67_H            =(0x01D6)+1;
sfrw P2MAP67              =(0x01D6);





















#line 2979 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430f6779a.h"





sfrb P3MAP01_L            =(0x01D8);
sfrb P3MAP01_H            =(0x01D8)+1;
sfrw P3MAP01              =(0x01D8);

sfrb P3MAP23_L            =(0x01DA);
sfrb P3MAP23_H            =(0x01DA)+1;
sfrw P3MAP23              =(0x01DA);

sfrb P3MAP45_L            =(0x01DC);
sfrb P3MAP45_H            =(0x01DC)+1;
sfrw P3MAP45              =(0x01DC);

sfrb P3MAP67_L            =(0x01DE);
sfrb P3MAP67_H            =(0x01DE)+1;
sfrw P3MAP67              =(0x01DE);





















#line 3022 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430f6779a.h"





sfrb P4MAP01_L            =(0x01E0);
sfrb P4MAP01_H            =(0x01E0)+1;
sfrw P4MAP01              =(0x01E0);

sfrb P4MAP23_L            =(0x01E2);
sfrb P4MAP23_H            =(0x01E2)+1;
sfrw P4MAP23              =(0x01E2);

sfrb P4MAP45_L            =(0x01E4);
sfrb P4MAP45_H            =(0x01E4)+1;
sfrw P4MAP45              =(0x01E4);

sfrb P4MAP67_L            =(0x01E6);
sfrb P4MAP67_H            =(0x01E6)+1;
sfrw P4MAP67              =(0x01E6);


































































#line 3110 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430f6779a.h"





sfrb PMMCTL0_L            =(0x0120);
sfrb PMMCTL0_H            =(0x0120)+1;
sfrw PMMCTL0              =(0x0120);

sfrb PMMCTL1_L            =(0x0122);
sfrb PMMCTL1_H            =(0x0122)+1;
sfrw PMMCTL1              =(0x0122);

sfrb SVSMHCTL_L           =(0x0124);
sfrb SVSMHCTL_H           =(0x0124)+1;
sfrw SVSMHCTL             =(0x0124);

sfrb SVSMLCTL_L           =(0x0126);
sfrb SVSMLCTL_H           =(0x0126)+1;
sfrw SVSMLCTL             =(0x0126);

sfrb SVSMIO_L             =(0x0128);
sfrb SVSMIO_H             =(0x0128)+1;
sfrw SVSMIO               =(0x0128);

sfrb PMMIFG_L             =(0x012C);
sfrb PMMIFG_H             =(0x012C)+1;
sfrw PMMIFG               =(0x012C);

sfrb PMMRIE_L             =(0x012E);
sfrb PMMRIE_H             =(0x012E)+1;
sfrw PMMRIE               =(0x012E);

sfrb PM5CTL0_L            =(0x0130);
sfrb PM5CTL0_H            =(0x0130)+1;
sfrw PM5CTL0              =(0x0130);





























































































































































































































#line 3369 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430f6779a.h"





sfrb RCCTL0_L             =(0x0158);
sfrb RCCTL0_H             =(0x0158)+1;
sfrw RCCTL0               =(0x0158);

















#line 3396 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430f6779a.h"





sfrb REFCTL0_L            =(0x01B0);
sfrb REFCTL0_H            =(0x01B0)+1;
sfrw REFCTL0              =(0x01B0);



















































#line 3457 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430f6779a.h"





sfrb RTCCTL0_L            =(0x0C80);
sfrb RTCCTL0_H            =(0x0C80)+1;
sfrw RTCCTL0              =(0x0C80);

sfrb RTCCTL13_L           =(0x0C82);
sfrb RTCCTL13_H           =(0x0C82)+1;
sfrw RTCCTL13             =(0x0C82);



sfrb RTCOCAL_L            =(0x0C84);
sfrb RTCOCAL_H            =(0x0C84)+1;
sfrw RTCOCAL              =(0x0C84);

sfrb RTCTCMP_L            =(0x0C86);
sfrb RTCTCMP_H            =(0x0C86)+1;
sfrw RTCTCMP              =(0x0C86);

sfrb RTCPS0CTL_L          =(0x0C88);
sfrb RTCPS0CTL_H          =(0x0C88)+1;
sfrw RTCPS0CTL            =(0x0C88);

sfrb RTCPS1CTL_L          =(0x0C8A);
sfrb RTCPS1CTL_H          =(0x0C8A)+1;
sfrw RTCPS1CTL            =(0x0C8A);

sfrb RTCPS_L              =(0x0C8C);
sfrb RTCPS_H              =(0x0C8C)+1;
sfrw RTCPS                =(0x0C8C);

sfrw    RTCIV                =(0x0C8E);

sfrb RTCTIM0_L            =(0x0C90);
sfrb RTCTIM0_H            =(0x0C90)+1;
sfrw RTCTIM0              =(0x0C90);

sfrb RTCTIM1_L            =(0x0C92);
sfrb RTCTIM1_H            =(0x0C92)+1;
sfrw RTCTIM1              =(0x0C92);

sfrb RTCDATE_L            =(0x0C94);
sfrb RTCDATE_H            =(0x0C94)+1;
sfrw RTCDATE              =(0x0C94);

sfrb RTCYEAR_L            =(0x0C96);
sfrb RTCYEAR_H            =(0x0C96)+1;
sfrw RTCYEAR              =(0x0C96);

sfrb RTCAMINHR_L          =(0x0C98);
sfrb RTCAMINHR_H          =(0x0C98)+1;
sfrw RTCAMINHR            =(0x0C98);

sfrb RTCADOWDAY_L         =(0x0C9A);
sfrb RTCADOWDAY_H         =(0x0C9A)+1;
sfrw RTCADOWDAY           =(0x0C9A);

sfrw    BIN2BCD              =(0x0C9C);

sfrw    BCD2BIN              =(0x0C9E);


sfrb    RTCTCCTL0            =(0x0CA0);

sfrb    RTCTCCTL1            =(0x0CA1);

sfrb    RTCCAP0CTL           =(0x0CA2);

sfrb    RTCCAP1CTL           =(0x0CA3);

sfrb    RTCSECBAK0           =(0x0CB0);

sfrb    RTCMINBAK0           =(0x0CB1);

sfrb    RTCHOURBAK0          =(0x0CB2);

sfrb    RTCDAYBAK0           =(0x0CB3);

sfrb    RTCMONBAK0           =(0x0CB4);

sfrb    RTCYEARBAK0          =(0x0CB6);

sfrb    RTCSECBAK1           =(0x0CB8);

sfrb    RTCMINBAK1           =(0x0CB9);

sfrb    RTCHOURBAK1          =(0x0CBA);

sfrb    RTCDAYBAK1           =(0x0CBB);

sfrb    RTCMONBAK1           =(0x0CBC);

sfrb    RTCYEARBAK1          =(0x0CBE);





























































































































































































































































































































#line 3873 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430f6779a.h"






sfrb SD24BCTL0_L          =(0x0800);
sfrb SD24BCTL0_H          =(0x0800)+1;
sfrw SD24BCTL0            =(0x0800);

sfrb SD24BCTL1_L          =(0x0802);
sfrb SD24BCTL1_H          =(0x0802)+1;
sfrw SD24BCTL1            =(0x0802);

sfrb SD24BTRGCTL_L        =(0x0804);
sfrb SD24BTRGCTL_H        =(0x0804)+1;
sfrw SD24BTRGCTL          =(0x0804);

sfrb SD24BTRGOSR_L        =(0x0806);
sfrb SD24BTRGOSR_H        =(0x0806)+1;
sfrw SD24BTRGOSR          =(0x0806);

sfrb SD24BTRGPRE_L        =(0x0808);
sfrb SD24BTRGPRE_H        =(0x0808)+1;
sfrw SD24BTRGPRE          =(0x0808);

sfrb SD24BIFG_L           =(0x080A);
sfrb SD24BIFG_H           =(0x080A)+1;
sfrw SD24BIFG             =(0x080A);

sfrb SD24BIE_L            =(0x080C);
sfrb SD24BIE_H            =(0x080C)+1;
sfrw SD24BIE              =(0x080C);

sfrb SD24BIV_L            =(0x080E);
sfrb SD24BIV_H            =(0x080E)+1;
sfrw SD24BIV              =(0x080E);


sfrb SD24BCCTL0_L         =(0x0810);
sfrb SD24BCCTL0_H         =(0x0810)+1;
sfrw SD24BCCTL0           =(0x0810);

sfrb SD24BINCTL0_L        =(0x0812);
sfrb SD24BINCTL0_H        =(0x0812)+1;
sfrw SD24BINCTL0          =(0x0812);

sfrb SD24BOSR0_L          =(0x0814);
sfrb SD24BOSR0_H          =(0x0814)+1;
sfrw SD24BOSR0            =(0x0814);

sfrb SD24BPRE0_L          =(0x0816);
sfrb SD24BPRE0_H          =(0x0816)+1;
sfrw SD24BPRE0            =(0x0816);

sfrb SD24BCCTL1_L         =(0x0818);
sfrb SD24BCCTL1_H         =(0x0818)+1;
sfrw SD24BCCTL1           =(0x0818);

sfrb SD24BINCTL1_L        =(0x081A);
sfrb SD24BINCTL1_H        =(0x081A)+1;
sfrw SD24BINCTL1          =(0x081A);

sfrb SD24BOSR1_L          =(0x081C);
sfrb SD24BOSR1_H          =(0x081C)+1;
sfrw SD24BOSR1            =(0x081C);

sfrb SD24BPRE1_L          =(0x081E);
sfrb SD24BPRE1_H          =(0x081E)+1;
sfrw SD24BPRE1            =(0x081E);

sfrb SD24BCCTL2_L         =(0x0820);
sfrb SD24BCCTL2_H         =(0x0820)+1;
sfrw SD24BCCTL2           =(0x0820);

sfrb SD24BINCTL2_L        =(0x0822);
sfrb SD24BINCTL2_H        =(0x0822)+1;
sfrw SD24BINCTL2          =(0x0822);

sfrb SD24BOSR2_L          =(0x0824);
sfrb SD24BOSR2_H          =(0x0824)+1;
sfrw SD24BOSR2            =(0x0824);

sfrb SD24BPRE2_L          =(0x0826);
sfrb SD24BPRE2_H          =(0x0826)+1;
sfrw SD24BPRE2            =(0x0826);

sfrb SD24BCCTL3_L         =(0x0828);
sfrb SD24BCCTL3_H         =(0x0828)+1;
sfrw SD24BCCTL3           =(0x0828);

sfrb SD24BINCTL3_L        =(0x082A);
sfrb SD24BINCTL3_H        =(0x082A)+1;
sfrw SD24BINCTL3          =(0x082A);

sfrb SD24BOSR3_L          =(0x082C);
sfrb SD24BOSR3_H          =(0x082C)+1;
sfrw SD24BOSR3            =(0x082C);

sfrb SD24BPRE3_L          =(0x082E);
sfrb SD24BPRE3_H          =(0x082E)+1;
sfrw SD24BPRE3            =(0x082E);

sfrb SD24BCCTL4_L         =(0x0830);
sfrb SD24BCCTL4_H         =(0x0830)+1;
sfrw SD24BCCTL4           =(0x0830);

sfrb SD24BINCTL4_L        =(0x0832);
sfrb SD24BINCTL4_H        =(0x0832)+1;
sfrw SD24BINCTL4          =(0x0832);

sfrb SD24BOSR4_L          =(0x0834);
sfrb SD24BOSR4_H          =(0x0834)+1;
sfrw SD24BOSR4            =(0x0834);

sfrb SD24BPRE4_L          =(0x0836);
sfrb SD24BPRE4_H          =(0x0836)+1;
sfrw SD24BPRE4            =(0x0836);

sfrb SD24BCCTL5_L         =(0x0838);
sfrb SD24BCCTL5_H         =(0x0838)+1;
sfrw SD24BCCTL5           =(0x0838);

sfrb SD24BINCTL5_L        =(0x083A);
sfrb SD24BINCTL5_H        =(0x083A)+1;
sfrw SD24BINCTL5          =(0x083A);

sfrb SD24BOSR5_L          =(0x083C);
sfrb SD24BOSR5_H          =(0x083C)+1;
sfrw SD24BOSR5            =(0x083C);

sfrb SD24BPRE5_L          =(0x083E);
sfrb SD24BPRE5_H          =(0x083E)+1;
sfrw SD24BPRE5            =(0x083E);

sfrb SD24BCCTL6_L         =(0x0840);
sfrb SD24BCCTL6_H         =(0x0840)+1;
sfrw SD24BCCTL6           =(0x0840);

sfrb SD24BINCTL6_L        =(0x0842);
sfrb SD24BINCTL6_H        =(0x0842)+1;
sfrw SD24BINCTL6          =(0x0842);

sfrb SD24BOSR6_L          =(0x0844);
sfrb SD24BOSR6_H          =(0x0844)+1;
sfrw SD24BOSR6            =(0x0844);

sfrb SD24BPRE6_L          =(0x0846);
sfrb SD24BPRE6_H          =(0x0846)+1;
sfrw SD24BPRE6            =(0x0846);


sfrb SD24BMEML0_L         =(0x0850);
sfrb SD24BMEML0_H         =(0x0850)+1;
sfrw SD24BMEML0           =(0x0850);

sfrb SD24BMEMH0_L         =(0x0852);
sfrb SD24BMEMH0_H         =(0x0852)+1;
sfrw SD24BMEMH0           =(0x0852);

sfrb SD24BMEML1_L         =(0x0854);
sfrb SD24BMEML1_H         =(0x0854)+1;
sfrw SD24BMEML1           =(0x0854);

sfrb SD24BMEMH1_L         =(0x0856);
sfrb SD24BMEMH1_H         =(0x0856)+1;
sfrw SD24BMEMH1           =(0x0856);

sfrb SD24BMEML2_L         =(0x0858);
sfrb SD24BMEML2_H         =(0x0858)+1;
sfrw SD24BMEML2           =(0x0858);

sfrb SD24BMEMH2_L         =(0x085A);
sfrb SD24BMEMH2_H         =(0x085A)+1;
sfrw SD24BMEMH2           =(0x085A);

sfrb SD24BMEML3_L         =(0x085C);
sfrb SD24BMEML3_H         =(0x085C)+1;
sfrw SD24BMEML3           =(0x085C);

sfrb SD24BMEMH3_L         =(0x085E);
sfrb SD24BMEMH3_H         =(0x085E)+1;
sfrw SD24BMEMH3           =(0x085E);

sfrb SD24BMEML4_L         =(0x0860);
sfrb SD24BMEML4_H         =(0x0860)+1;
sfrw SD24BMEML4           =(0x0860);

sfrb SD24BMEMH4_L         =(0x0862);
sfrb SD24BMEMH4_H         =(0x0862)+1;
sfrw SD24BMEMH4           =(0x0862);

sfrb SD24BMEML5_L         =(0x0864);
sfrb SD24BMEML5_H         =(0x0864)+1;
sfrw SD24BMEML5           =(0x0864);

sfrb SD24BMEMH5_L         =(0x0866);
sfrb SD24BMEMH5_H         =(0x0866)+1;
sfrw SD24BMEMH5           =(0x0866);

sfrb SD24BMEML6_L         =(0x0868);
sfrb SD24BMEML6_H         =(0x0868)+1;
sfrw SD24BMEML6           =(0x0868);

sfrb SD24BMEMH6_L         =(0x086A);
sfrb SD24BMEMH6_H         =(0x086A)+1;
sfrw SD24BMEMH6           =(0x086A);







































































































































































































































































































#line 4377 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430f6779a.h"





sfrb SFRIE1_L             =(0x0100);
sfrb SFRIE1_H             =(0x0100)+1;
sfrw SFRIE1               =(0x0100);






















sfrb SFRIFG1_L            =(0x0102);
sfrb SFRIFG1_H            =(0x0102)+1;
sfrw SFRIFG1              =(0x0102);





















sfrb SFRRPCR_L            =(0x0104);
sfrb SFRRPCR_H            =(0x0104)+1;
sfrw SFRRPCR              =(0x0104);













#line 4449 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430f6779a.h"





sfrb SYSCTL_L             =(0x0180);
sfrb SYSCTL_H             =(0x0180)+1;
sfrw SYSCTL               =(0x0180);

sfrb SYSBSLC_L            =(0x0182);
sfrb SYSBSLC_H            =(0x0182)+1;
sfrw SYSBSLC              =(0x0182);

sfrb SYSJMBC_L            =(0x0186);
sfrb SYSJMBC_H            =(0x0186)+1;
sfrw SYSJMBC              =(0x0186);

sfrb SYSJMBI0_L           =(0x0188);
sfrb SYSJMBI0_H           =(0x0188)+1;
sfrw SYSJMBI0             =(0x0188);

sfrb SYSJMBI1_L           =(0x018A);
sfrb SYSJMBI1_H           =(0x018A)+1;
sfrw SYSJMBI1             =(0x018A);

sfrb SYSJMBO0_L           =(0x018C);
sfrb SYSJMBO0_H           =(0x018C)+1;
sfrw SYSJMBO0             =(0x018C);

sfrb SYSJMBO1_L           =(0x018E);
sfrb SYSJMBO1_H           =(0x018E)+1;
sfrw SYSJMBO1             =(0x018E);


sfrb SYSBERRIV_L          =(0x0198);
sfrb SYSBERRIV_H          =(0x0198)+1;
sfrw SYSBERRIV            =(0x0198);

sfrb SYSUNIV_L            =(0x019A);
sfrb SYSUNIV_H            =(0x019A)+1;
sfrw SYSUNIV              =(0x019A);

sfrb SYSSNIV_L            =(0x019C);
sfrb SYSSNIV_H            =(0x019C)+1;
sfrw SYSSNIV              =(0x019C);

sfrb SYSRSTIV_L           =(0x019E);
sfrb SYSRSTIV_H           =(0x019E)+1;
sfrw SYSRSTIV             =(0x019E);








































































































































































#line 4668 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430f6779a.h"





sfrw     TA0CTL               =(0x0340);

sfrw     TA0CCTL0             =(0x0342);

sfrw     TA0CCTL1             =(0x0344);

sfrw     TA0CCTL2             =(0x0346);

sfrw     TA0R                 =(0x0350);

sfrw     TA0CCR0              =(0x0352);

sfrw     TA0CCR1              =(0x0354);

sfrw     TA0CCR2              =(0x0356);

sfrw     TA0IV                =(0x036E);

sfrw     TA0EX0               =(0x0360);







































































































#line 4797 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430f6779a.h"





sfrw     TA1CTL               =(0x0380);

sfrw     TA1CCTL0             =(0x0382);

sfrw     TA1CCTL1             =(0x0384);

sfrw     TA1R                 =(0x0390);

sfrw     TA1CCR0              =(0x0392);

sfrw     TA1CCR1              =(0x0394);

sfrw     TA1IV                =(0x03AE);

sfrw     TA1EX0               =(0x03A0);

















#line 4836 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430f6779a.h"





sfrw     TA2CTL               =(0x0400);

sfrw     TA2CCTL0             =(0x0402);

sfrw     TA2CCTL1             =(0x0404);

sfrw     TA2R                 =(0x0410);

sfrw     TA2CCR0              =(0x0412);

sfrw     TA2CCR1              =(0x0414);

sfrw     TA2IV                =(0x042E);

sfrw     TA2EX0               =(0x0420);

















#line 4875 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430f6779a.h"





sfrw     TA3CTL               =(0x0440);

sfrw     TA3CCTL0             =(0x0442);

sfrw     TA3CCTL1             =(0x0444);

sfrw     TA3R                 =(0x0450);

sfrw     TA3CCR0              =(0x0452);

sfrw     TA3CCR1              =(0x0454);

sfrw     TA3IV                =(0x046E);

sfrw     TA3EX0               =(0x0460);

















#line 4914 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430f6779a.h"





sfrb UCSCTL0_L            =(0x0160);
sfrb UCSCTL0_H            =(0x0160)+1;
sfrw UCSCTL0              =(0x0160);

sfrb UCSCTL1_L            =(0x0162);
sfrb UCSCTL1_H            =(0x0162)+1;
sfrw UCSCTL1              =(0x0162);

sfrb UCSCTL2_L            =(0x0164);
sfrb UCSCTL2_H            =(0x0164)+1;
sfrw UCSCTL2              =(0x0164);

sfrb UCSCTL3_L            =(0x0166);
sfrb UCSCTL3_H            =(0x0166)+1;
sfrw UCSCTL3              =(0x0166);

sfrb UCSCTL4_L            =(0x0168);
sfrb UCSCTL4_H            =(0x0168)+1;
sfrw UCSCTL4              =(0x0168);

sfrb UCSCTL5_L            =(0x016A);
sfrb UCSCTL5_H            =(0x016A)+1;
sfrw UCSCTL5              =(0x016A);

sfrb UCSCTL6_L            =(0x016C);
sfrb UCSCTL6_H            =(0x016C)+1;
sfrw UCSCTL6              =(0x016C);

sfrb UCSCTL7_L            =(0x016E);
sfrb UCSCTL7_H            =(0x016E)+1;
sfrw UCSCTL7              =(0x016E);

sfrb UCSCTL8_L            =(0x0170);
sfrb UCSCTL8_H            =(0x0170)+1;
sfrw UCSCTL8              =(0x0170);

























































































































































































































































































































































































































































































































































#line 5493 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430f6779a.h"





sfrb UCA0CTLW0_L          =(0x05C0);
sfrb UCA0CTLW0_H          =(0x05C0)+1;
sfrw UCA0CTLW0            =(0x05C0);



sfrb UCA0CTLW1_L          =(0x05C2);
sfrb UCA0CTLW1_H          =(0x05C2)+1;
sfrw UCA0CTLW1            =(0x05C2);

sfrb UCA0BRW_L            =(0x05C6);
sfrb UCA0BRW_H            =(0x05C6)+1;
sfrw UCA0BRW              =(0x05C6);



sfrb UCA0MCTLW_L          =(0x05C8);
sfrb UCA0MCTLW_H          =(0x05C8)+1;
sfrw UCA0MCTLW            =(0x05C8);

sfrb    UCA0STATW            =(0x05CA);

const sfrb UCA0RXBUF_L    =(0x05CC);
const sfrb UCA0RXBUF_H    =(0x05CC)+1;
const sfrw UCA0RXBUF      =(0x05CC);

sfrb UCA0TXBUF_L          =(0x05CE);
sfrb UCA0TXBUF_H          =(0x05CE)+1;
sfrw UCA0TXBUF            =(0x05CE);

sfrb    UCA0ABCTL            =(0x05D0);

sfrb UCA0IRCTL_L          =(0x05D2);
sfrb UCA0IRCTL_H          =(0x05D2)+1;
sfrw UCA0IRCTL            =(0x05D2);



sfrb UCA0IE_L             =(0x05DA);
sfrb UCA0IE_H             =(0x05DA)+1;
sfrw UCA0IE               =(0x05DA);

sfrb UCA0IFG_L            =(0x05DC);
sfrb UCA0IFG_H            =(0x05DC)+1;
sfrw UCA0IFG              =(0x05DC);

sfrw    UCA0IV               =(0x05DE);



























































































































































































































































































































































































































































































































#line 6054 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430f6779a.h"





sfrb UCA1CTLW0_L          =(0x05E0);
sfrb UCA1CTLW0_H          =(0x05E0)+1;
sfrw UCA1CTLW0            =(0x05E0);



sfrb UCA1CTLW1_L          =(0x05E2);
sfrb UCA1CTLW1_H          =(0x05E2)+1;
sfrw UCA1CTLW1            =(0x05E2);

sfrb UCA1BRW_L            =(0x05E6);
sfrb UCA1BRW_H            =(0x05E6)+1;
sfrw UCA1BRW              =(0x05E6);



sfrb UCA1MCTLW_L          =(0x05E8);
sfrb UCA1MCTLW_H          =(0x05E8)+1;
sfrw UCA1MCTLW            =(0x05E8);

sfrb    UCA1STATW            =(0x05EA);

const sfrb UCA1RXBUF_L    =(0x05EC);
const sfrb UCA1RXBUF_H    =(0x05EC)+1;
const sfrw UCA1RXBUF      =(0x05EC);

sfrb UCA1TXBUF_L          =(0x05EE);
sfrb UCA1TXBUF_H          =(0x05EE)+1;
sfrw UCA1TXBUF            =(0x05EE);

sfrb    UCA1ABCTL            =(0x05F0);

sfrb UCA1IRCTL_L          =(0x05F2);
sfrb UCA1IRCTL_H          =(0x05F2)+1;
sfrw UCA1IRCTL            =(0x05F2);



sfrb UCA1IE_L             =(0x05FA);
sfrb UCA1IE_H             =(0x05FA)+1;
sfrw UCA1IE               =(0x05FA);

sfrb UCA1IFG_L            =(0x05FC);
sfrb UCA1IFG_H            =(0x05FC)+1;
sfrw UCA1IFG              =(0x05FC);

sfrw    UCA1IV               =(0x05FE);



#line 6111 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430f6779a.h"





sfrb UCA2CTLW0_L          =(0x0600);
sfrb UCA2CTLW0_H          =(0x0600)+1;
sfrw UCA2CTLW0            =(0x0600);



sfrb UCA2CTLW1_L          =(0x0602);
sfrb UCA2CTLW1_H          =(0x0602)+1;
sfrw UCA2CTLW1            =(0x0602);

sfrb UCA2BRW_L            =(0x0606);
sfrb UCA2BRW_H            =(0x0606)+1;
sfrw UCA2BRW              =(0x0606);



sfrb UCA2MCTLW_L          =(0x0608);
sfrb UCA2MCTLW_H          =(0x0608)+1;
sfrw UCA2MCTLW            =(0x0608);

sfrb    UCA2STATW            =(0x060A);

const sfrb UCA2RXBUF_L    =(0x060C);
const sfrb UCA2RXBUF_H    =(0x060C)+1;
const sfrw UCA2RXBUF      =(0x060C);

sfrb UCA2TXBUF_L          =(0x060E);
sfrb UCA2TXBUF_H          =(0x060E)+1;
sfrw UCA2TXBUF            =(0x060E);

sfrb    UCA2ABCTL            =(0x0610);

sfrb UCA2IRCTL_L          =(0x0612);
sfrb UCA2IRCTL_H          =(0x0612)+1;
sfrw UCA2IRCTL            =(0x0612);



sfrb UCA2IE_L             =(0x061A);
sfrb UCA2IE_H             =(0x061A)+1;
sfrw UCA2IE               =(0x061A);

sfrb UCA2IFG_L            =(0x061C);
sfrb UCA2IFG_H            =(0x061C)+1;
sfrw UCA2IFG              =(0x061C);

sfrw    UCA2IV               =(0x061E);



#line 6168 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430f6779a.h"





sfrb UCA3CTLW0_L          =(0x0620);
sfrb UCA3CTLW0_H          =(0x0620)+1;
sfrw UCA3CTLW0            =(0x0620);



sfrb UCA3CTLW1_L          =(0x0622);
sfrb UCA3CTLW1_H          =(0x0622)+1;
sfrw UCA3CTLW1            =(0x0622);

sfrb UCA3BRW_L            =(0x0626);
sfrb UCA3BRW_H            =(0x0626)+1;
sfrw UCA3BRW              =(0x0626);



sfrb UCA3MCTLW_L          =(0x0628);
sfrb UCA3MCTLW_H          =(0x0628)+1;
sfrw UCA3MCTLW            =(0x0628);

sfrb    UCA3STATW            =(0x062A);

const sfrb UCA3RXBUF_L    =(0x062C);
const sfrb UCA3RXBUF_H    =(0x062C)+1;
const sfrw UCA3RXBUF      =(0x062C);

sfrb UCA3TXBUF_L          =(0x062E);
sfrb UCA3TXBUF_H          =(0x062E)+1;
sfrw UCA3TXBUF            =(0x062E);

sfrb    UCA3ABCTL            =(0x0630);

sfrb UCA3IRCTL_L          =(0x0632);
sfrb UCA3IRCTL_H          =(0x0632)+1;
sfrw UCA3IRCTL            =(0x0632);



sfrb UCA3IE_L             =(0x063A);
sfrb UCA3IE_H             =(0x063A)+1;
sfrw UCA3IE               =(0x063A);

sfrb UCA3IFG_L            =(0x063C);
sfrb UCA3IFG_H            =(0x063C)+1;
sfrw UCA3IFG              =(0x063C);

sfrw    UCA3IV               =(0x063E);



#line 6225 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430f6779a.h"






sfrb UCB0CTLW0_L          =(0x0640);
sfrb UCB0CTLW0_H          =(0x0640)+1;
sfrw UCB0CTLW0            =(0x0640);



sfrb UCB0CTLW1_L          =(0x0642);
sfrb UCB0CTLW1_H          =(0x0642)+1;
sfrw UCB0CTLW1            =(0x0642);

sfrb UCB0BRW_L            =(0x0646);
sfrb UCB0BRW_H            =(0x0646)+1;
sfrw UCB0BRW              =(0x0646);



sfrb UCB0STATW_L          =(0x0648);
sfrb UCB0STATW_H          =(0x0648)+1;
sfrw UCB0STATW            =(0x0648);



sfrb UCB0TBCNT_L          =(0x064A);
sfrb UCB0TBCNT_H          =(0x064A)+1;
sfrw UCB0TBCNT            =(0x064A);

const sfrb UCB0RXBUF_L    =(0x064C);
const sfrb UCB0RXBUF_H    =(0x064C)+1;
const sfrw UCB0RXBUF      =(0x064C);

sfrb UCB0TXBUF_L          =(0x064E);
sfrb UCB0TXBUF_H          =(0x064E)+1;
sfrw UCB0TXBUF            =(0x064E);

sfrb UCB0I2COA0_L         =(0x0654);
sfrb UCB0I2COA0_H         =(0x0654)+1;
sfrw UCB0I2COA0           =(0x0654);

sfrb UCB0I2COA1_L         =(0x0656);
sfrb UCB0I2COA1_H         =(0x0656)+1;
sfrw UCB0I2COA1           =(0x0656);

sfrb UCB0I2COA2_L         =(0x0658);
sfrb UCB0I2COA2_H         =(0x0658)+1;
sfrw UCB0I2COA2           =(0x0658);

sfrb UCB0I2COA3_L         =(0x065A);
sfrb UCB0I2COA3_H         =(0x065A)+1;
sfrw UCB0I2COA3           =(0x065A);

sfrb UCB0ADDRX_L          =(0x065C);
sfrb UCB0ADDRX_H          =(0x065C)+1;
sfrw UCB0ADDRX            =(0x065C);

sfrb UCB0ADDMASK_L        =(0x065E);
sfrb UCB0ADDMASK_H        =(0x065E)+1;
sfrw UCB0ADDMASK          =(0x065E);

sfrb UCB0I2CSA_L          =(0x0660);
sfrb UCB0I2CSA_H          =(0x0660)+1;
sfrw UCB0I2CSA            =(0x0660);

sfrb UCB0IE_L             =(0x066A);
sfrb UCB0IE_H             =(0x066A)+1;
sfrw UCB0IE               =(0x066A);

sfrb UCB0IFG_L            =(0x066C);
sfrb UCB0IFG_H            =(0x066C)+1;
sfrw UCB0IFG              =(0x066C);

sfrw    UCB0IV               =(0x066E);


#line 6306 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430f6779a.h"






sfrb UCB1CTLW0_L          =(0x0680);
sfrb UCB1CTLW0_H          =(0x0680)+1;
sfrw UCB1CTLW0            =(0x0680);



sfrb UCB1CTLW1_L          =(0x0682);
sfrb UCB1CTLW1_H          =(0x0682)+1;
sfrw UCB1CTLW1            =(0x0682);

sfrb UCB1BRW_L            =(0x0686);
sfrb UCB1BRW_H            =(0x0686)+1;
sfrw UCB1BRW              =(0x0686);



sfrb UCB1STATW_L          =(0x0688);
sfrb UCB1STATW_H          =(0x0688)+1;
sfrw UCB1STATW            =(0x0688);



sfrb UCB1TBCNT_L          =(0x068A);
sfrb UCB1TBCNT_H          =(0x068A)+1;
sfrw UCB1TBCNT            =(0x068A);

const sfrb UCB1RXBUF_L    =(0x068C);
const sfrb UCB1RXBUF_H    =(0x068C)+1;
const sfrw UCB1RXBUF      =(0x068C);

sfrb UCB1TXBUF_L          =(0x068E);
sfrb UCB1TXBUF_H          =(0x068E)+1;
sfrw UCB1TXBUF            =(0x068E);

sfrb UCB1I2COA0_L         =(0x0694);
sfrb UCB1I2COA0_H         =(0x0694)+1;
sfrw UCB1I2COA0           =(0x0694);

sfrb UCB1I2COA1_L         =(0x0696);
sfrb UCB1I2COA1_H         =(0x0696)+1;
sfrw UCB1I2COA1           =(0x0696);

sfrb UCB1I2COA2_L         =(0x0698);
sfrb UCB1I2COA2_H         =(0x0698)+1;
sfrw UCB1I2COA2           =(0x0698);

sfrb UCB1I2COA3_L         =(0x069A);
sfrb UCB1I2COA3_H         =(0x069A)+1;
sfrw UCB1I2COA3           =(0x069A);

sfrb UCB1ADDRX_L          =(0x069C);
sfrb UCB1ADDRX_H          =(0x069C)+1;
sfrw UCB1ADDRX            =(0x069C);

sfrb UCB1ADDMASK_L        =(0x069E);
sfrb UCB1ADDMASK_H        =(0x069E)+1;
sfrw UCB1ADDMASK          =(0x069E);

sfrb UCB1I2CSA_L          =(0x06A0);
sfrb UCB1I2CSA_H          =(0x06A0)+1;
sfrw UCB1I2CSA            =(0x06A0);

sfrb UCB1IE_L             =(0x06AA);
sfrb UCB1IE_H             =(0x06AA)+1;
sfrw UCB1IE               =(0x06AA);

sfrb UCB1IFG_L            =(0x06AC);
sfrb UCB1IFG_H            =(0x06AC)+1;
sfrw UCB1IFG              =(0x06AC);

sfrw    UCB1IV               =(0x06AE);


#line 6387 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430f6779a.h"





sfrb WDTCTL_L             =(0x015C);
sfrb WDTCTL_H             =(0x015C)+1;
sfrw WDTCTL               =(0x015C);











































































#line 6472 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430f6779a.h"























#line 6497 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430f6779a.h"
































#line 6531 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430f6779a.h"



#line 1250 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430.h"









































































































































































































































































































































































































































































































































#line 1773 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430.h"








#line 1783 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430.h"






#line 2 "z:/software/example_bare_bones/main.c"
#line 1 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"





























#line 59 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
typedef enum
{
  CTL_STATE_RUNNABLE                   = 0x00,
  CTL_STATE_TIMER_WAIT                 = 0x01,
  CTL_STATE_EVENT_WAIT_ALL             = 0x02,
  CTL_STATE_EVENT_WAIT_ALL_AC          = 0x04,
  CTL_STATE_EVENT_WAIT_ANY             = 0x06,
  CTL_STATE_EVENT_WAIT_ANY_AC          = 0x08,
  CTL_STATE_SEMAPHORE_WAIT             = 0x0A,
  CTL_STATE_MESSAGE_QUEUE_POST_WAIT    = 0x0C,
  CTL_STATE_MESSAGE_QUEUE_RECEIVE_WAIT = 0x0E,
  CTL_STATE_MUTEX_WAIT                 = 0x10,
  CTL_STATE_SUSPENDED                  = 0x80
} CTL_STATE_t;





#line 81 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
typedef unsigned long CTL_TIME_t;



#line 89 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
typedef unsigned CTL_EVENT_SET_t;






#line 116 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
typedef struct CTL_TASK_s
{
  unsigned *stack_pointer;
  unsigned *thread_local_storage;
  unsigned *stack_start;
  unsigned char priority;
  unsigned char state;
  unsigned char timeout_occured;
  struct CTL_TASK_s *next;
  CTL_TIME_t timeout;
  void *wait_object;
  CTL_EVENT_SET_t wait_events;
  void *data;
  CTL_TIME_t execution_time;
  const char *name;
} CTL_TASK_t;




















#line 162 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
void ctl_task_init(CTL_TASK_t *task,
                   unsigned char priority,
                   const char *name);



#line 182 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
void ctl_task_run(CTL_TASK_t *task,
                  unsigned char priority,
                  void (*entrypoint)(void *),
                  void *parameter,
                  const char *name,
                  unsigned stack_size_in_words,
                  unsigned *stack,
                  unsigned call_size_in_words);



#line 198 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
void ctl_task_remove(CTL_TASK_t *task);



#line 206 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
void ctl_task_restore(CTL_TASK_t *task);



#line 214 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
void ctl_task_die(void);



#line 227 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
unsigned char ctl_task_set_priority(CTL_TASK_t *task,
                                    unsigned char priority);



#line 236 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
void ctl_task_reschedule(void);






















#line 262 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
CTL_TIME_t ctl_get_current_time(void);





#line 275 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
void ctl_timeout_wait(CTL_TIME_t timeout);



#line 285 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
void ctl_increment_tick_from_isr(void);



#line 293 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
unsigned ctl_get_sleep_delay(void);






#line 318 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
typedef enum
{
  CTL_TIMEOUT_NONE,
  CTL_TIMEOUT_INFINITE = CTL_TIMEOUT_NONE,
  CTL_TIMEOUT_ABSOLUTE,
  CTL_TIMEOUT_DELAY,
  CTL_TIMEOUT_NOW
} CTL_TIMEOUT_t;







#line 336 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
void ctl_events_init(CTL_EVENT_SET_t *e,
                     CTL_EVENT_SET_t set);



#line 349 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
void ctl_events_set_clear(CTL_EVENT_SET_t *e,
                          CTL_EVENT_SET_t set,
                          CTL_EVENT_SET_t clear);



#line 364 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
void ctl_events_pulse(CTL_EVENT_SET_t *e,
                      CTL_EVENT_SET_t set_then_clear);



#line 388 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
typedef enum
{
  CTL_EVENT_WAIT_ANY_EVENTS = CTL_STATE_EVENT_WAIT_ANY,
  CTL_EVENT_WAIT_ANY_EVENTS_WITH_AUTO_CLEAR = CTL_STATE_EVENT_WAIT_ANY_AC,
  CTL_EVENT_WAIT_ALL_EVENTS = CTL_STATE_EVENT_WAIT_ALL,
  CTL_EVENT_WAIT_ALL_EVENTS_WITH_AUTO_CLEAR = CTL_STATE_EVENT_WAIT_ALL_AC
} CTL_EVENT_WAIT_TYPE_t;



#line 419 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
unsigned ctl_events_wait(CTL_EVENT_WAIT_TYPE_t waitType,
                         CTL_EVENT_SET_t *eventSet,
                         CTL_EVENT_SET_t events,
                         CTL_TIMEOUT_t timeoutType,
                         CTL_TIME_t timeout);


#line 446 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
unsigned ctl_events_wait_uc(CTL_EVENT_WAIT_TYPE_t waitType,
                            CTL_EVENT_SET_t *eventSet,
                            CTL_EVENT_SET_t events);


#line 471 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
unsigned ctl_events_wait_nb(CTL_EVENT_WAIT_TYPE_t waitType,
                            CTL_EVENT_SET_t *eventSet,
                            CTL_EVENT_SET_t events);











#line 490 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
typedef unsigned CTL_SEMAPHORE_t;



#line 498 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
void ctl_semaphore_init(CTL_SEMAPHORE_t *s,
                        unsigned value);



#line 509 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
void ctl_semaphore_signal(CTL_SEMAPHORE_t *s);



#line 522 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
unsigned ctl_semaphore_wait(CTL_SEMAPHORE_t *s,
                            CTL_TIMEOUT_t t,
                            CTL_TIME_t timeout);


#line 533 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
void ctl_semaphore_wait_uc(CTL_SEMAPHORE_t *s);


#line 542 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
unsigned ctl_semaphore_wait_nb(CTL_SEMAPHORE_t *s);









#line 566 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"

typedef struct {
  void **q;
  unsigned s;
  unsigned front;
  unsigned n;
  CTL_EVENT_SET_t *e;
  CTL_EVENT_SET_t notempty;
  CTL_EVENT_SET_t notfull;
} CTL_MESSAGE_QUEUE_t;



#line 585 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
void ctl_message_queue_init(CTL_MESSAGE_QUEUE_t *q,
                            void **queue,
                            unsigned queue_size);



#line 597 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
void ctl_message_queue_setup_events(CTL_MESSAGE_QUEUE_t *q,
                                    CTL_EVENT_SET_t *e,
                                    CTL_EVENT_SET_t notempty,
                                    CTL_EVENT_SET_t notfull);



#line 607 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
unsigned ctl_message_queue_num_free(CTL_MESSAGE_QUEUE_t *q);



#line 614 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
unsigned ctl_message_queue_num_used(CTL_MESSAGE_QUEUE_t *q);



#line 628 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
unsigned ctl_message_queue_post(CTL_MESSAGE_QUEUE_t *q,
                                void *message,
                                CTL_TIMEOUT_t t,
                                CTL_TIME_t timeout);



#line 642 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
void ctl_message_queue_post_uc(CTL_MESSAGE_QUEUE_t *q,
                               void *message);



#line 652 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
unsigned ctl_message_queue_post_nb(CTL_MESSAGE_QUEUE_t *q,
                                   void *message);



#line 667 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
unsigned ctl_message_queue_receive(CTL_MESSAGE_QUEUE_t *q,
                                   void **message,
                                   CTL_TIMEOUT_t t,
                                   CTL_TIME_t timeout);



#line 681 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
void ctl_message_queue_receive_uc(CTL_MESSAGE_QUEUE_t *q,
                                  void **message);



#line 691 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
unsigned ctl_message_queue_receive_nb(CTL_MESSAGE_QUEUE_t *q,
                                      void **message);



#line 709 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
unsigned ctl_message_queue_post_multi(CTL_MESSAGE_QUEUE_t *q,
                                      unsigned n,
                                      void **messages,
                                      CTL_TIMEOUT_t t,
                                      CTL_TIME_t timeout);



#line 729 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
void ctl_message_queue_post_multi_uc(CTL_MESSAGE_QUEUE_t *q,
                                     unsigned n,
                                     void **messages);



#line 740 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
unsigned ctl_message_queue_post_multi_nb(CTL_MESSAGE_QUEUE_t *q,
                                         unsigned n,
                                         void **messages);



#line 756 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
unsigned ctl_message_queue_receive_multi(CTL_MESSAGE_QUEUE_t *q,
                                         unsigned n,
                                         void **messages,
                                         CTL_TIMEOUT_t t,
                                         CTL_TIME_t timeout);



#line 771 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
void ctl_message_queue_receive_multi_uc(CTL_MESSAGE_QUEUE_t *q,
                                        unsigned n,
                                        void **messages);



#line 783 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
unsigned ctl_message_queue_receive_multi_nb(CTL_MESSAGE_QUEUE_t *q,
                                            unsigned n,
                                            void **messages);










#line 810 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
typedef struct {
  unsigned char *q;
  unsigned s;
  unsigned front;
  unsigned n;
  CTL_EVENT_SET_t *e;
  CTL_EVENT_SET_t notempty;
  CTL_EVENT_SET_t notfull;
} CTL_BYTE_QUEUE_t;



#line 828 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
void ctl_byte_queue_init(CTL_BYTE_QUEUE_t *q,
                         unsigned char *queue,
                         unsigned queue_size);



#line 840 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
void ctl_byte_queue_setup_events(CTL_BYTE_QUEUE_t *q,
                                 CTL_EVENT_SET_t *e,
                                 CTL_EVENT_SET_t notempty,
                                 CTL_EVENT_SET_t notfull);



#line 850 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
unsigned ctl_byte_queue_num_free(CTL_BYTE_QUEUE_t *q);



#line 857 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
unsigned ctl_byte_queue_num_used(CTL_BYTE_QUEUE_t *q);



#line 871 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
unsigned ctl_byte_queue_post(CTL_BYTE_QUEUE_t *q,
                             unsigned char b,
                             CTL_TIMEOUT_t t,
                             CTL_TIME_t timeout);



#line 885 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
void ctl_byte_queue_post_uc(CTL_BYTE_QUEUE_t *q,
                            unsigned char b);



#line 895 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
unsigned ctl_byte_queue_post_nb(CTL_BYTE_QUEUE_t *q,
                                unsigned char b);



#line 910 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
unsigned ctl_byte_queue_receive(CTL_BYTE_QUEUE_t *q,
                                unsigned char *b,
                                CTL_TIMEOUT_t t,
                                CTL_TIME_t timeout);



#line 924 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
void ctl_byte_queue_receive_uc(CTL_BYTE_QUEUE_t *q,
                               unsigned char *b);



#line 934 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
unsigned ctl_byte_queue_receive_nb(CTL_BYTE_QUEUE_t *q,
                                   unsigned char *b);



#line 953 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
unsigned ctl_byte_queue_post_multi(CTL_BYTE_QUEUE_t *q,
                                   unsigned n,
                                   unsigned char *b,
                                   CTL_TIMEOUT_t t,
                                   CTL_TIME_t timeout);



#line 974 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
void ctl_byte_queue_post_multi_uc(CTL_BYTE_QUEUE_t *q,
                                  unsigned n,
                                  unsigned char *b);



#line 985 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
unsigned ctl_byte_queue_post_multi_nb(CTL_BYTE_QUEUE_t *q,
                                      unsigned n,
                                      unsigned char *b);



#line 1001 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
unsigned ctl_byte_queue_receive_multi(CTL_BYTE_QUEUE_t *q,
                                      unsigned n,
                                      unsigned char *b,
                                      CTL_TIMEOUT_t t,
                                      CTL_TIME_t timeout);



#line 1016 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
void ctl_byte_queue_receive_multi_uc(CTL_BYTE_QUEUE_t *q,
                                     unsigned n,
                                     unsigned char *b);



#line 1028 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
unsigned ctl_byte_queue_receive_multi_nb(CTL_BYTE_QUEUE_t *q,
                                         unsigned n,
                                         unsigned char *b);











#line 1052 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
typedef struct {
  unsigned lock_count;
  CTL_TASK_t *locking_task;
  unsigned locking_task_priority;
} CTL_MUTEX_t;



#line 1063 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
void ctl_mutex_init(CTL_MUTEX_t *m);



#line 1075 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
void ctl_mutex_unlock(CTL_MUTEX_t *m);



#line 1093 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
unsigned ctl_mutex_lock(CTL_MUTEX_t *m,
                        CTL_TIMEOUT_t t,
                        CTL_TIME_t timeout);



#line 1110 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
void ctl_mutex_lock_uc(CTL_MUTEX_t *m);


#line 1121 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
unsigned ctl_mutex_lock_nb(CTL_MUTEX_t *m);











#line 1142 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
int ctl_global_interrupts_set(int enable);






#line 1156 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 1164 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"









#line 1174 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"


#line 1177 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"














































#line 1224 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"


#line 1227 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"



#line 1 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"















#line 20 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"



#line 32 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"





#line 47 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"





#line 66 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"





#line 85 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"






#line 99 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"








#line 115 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"








#line 129 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"







#line 142 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"





#line 153 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"





#line 164 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"





#line 175 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"





#line 186 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"





#line 197 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"





#line 208 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"





#line 219 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"





#line 230 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"





#line 241 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"





#line 252 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"





#line 272 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"





#line 284 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"





#line 296 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"





#line 308 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"





#line 320 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"





#line 332 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"





#line 344 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"





#line 356 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"





#line 368 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"





#line 380 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"





#line 392 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"





#line 403 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"






#line 415 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"








#line 430 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"








#line 445 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"








#line 460 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"








#line 474 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"








#line 492 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"







#line 506 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"






#line 517 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"







#line 530 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"




#line 540 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"




#line 550 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"




#line 560 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"




#line 570 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"




#line 580 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"





#line 588 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/inmsp.h"






#line 1231 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"


#line 1234 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"


#line 1237 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"


















#line 1279 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
typedef enum
{
  CTL_ERROR_NO_TASKS_TO_RUN,
  CTL_UNSUPPORTED_CALL_FROM_ISR,
  CTL_MUTEX_UNLOCK_CALL_ERROR,
  CTL_UNSPECIFIED_ERROR,
  CTL_STACK_OVERFLOW = 10
} CTL_ERROR_CODE_t;



#line 1297 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
void ctl_handle_error(CTL_ERROR_CODE_t __e);










#line 1318 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
typedef struct {
  unsigned *head;
  CTL_EVENT_SET_t *e;
  CTL_EVENT_SET_t blockavailable;
} CTL_MEMORY_AREA_t;



#line 1335 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
void ctl_memory_area_init(CTL_MEMORY_AREA_t *memory_area,
                          unsigned *memory,
                          unsigned block_size_in_words,
                          unsigned num_blocks);



#line 1347 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
void ctl_memory_area_setup_events(CTL_MEMORY_AREA_t *m,
                                  CTL_EVENT_SET_t *e,
                                  CTL_EVENT_SET_t blockavailable);



#line 1361 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
unsigned *ctl_memory_area_allocate(CTL_MEMORY_AREA_t *memory_area);



#line 1370 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
void ctl_memory_area_free(CTL_MEMORY_AREA_t *memory_area,
                          unsigned *block);










#line 1386 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
extern CTL_TASK_t *ctl_task_list;



#line 1396 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
extern CTL_TASK_t *ctl_task_executing;



#line 1405 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
extern unsigned char ctl_interrupt_count;



#line 1414 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
extern unsigned char ctl_reschedule_on_last_isr_exit;



#line 1438 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
extern CTL_TIME_t ctl_current_time;



#line 1448 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
extern CTL_TIME_t ctl_timeslice_period;



#line 1456 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
extern unsigned ctl_time_increment;



#line 1465 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
extern CTL_TIME_t ctl_last_schedule_time;



#line 1480 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"
extern void (*ctl_task_switch_callout)(CTL_TASK_t *);









#line 3 "z:/software/example_bare_bones/main.c"
#line 1 "z:/arc-2/arc2-software/include/arcbus.h"





#line 1 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"





























#line 59 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"



















#line 81 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 89 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"







#line 116 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




































#line 162 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"






#line 182 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"











#line 198 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 206 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 214 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 227 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"





#line 236 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"























#line 262 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"






#line 275 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 285 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 293 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"







#line 318 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"















#line 336 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"





#line 349 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"






#line 364 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"





#line 388 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"










#line 419 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"







#line 446 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"





#line 471 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"














#line 490 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 498 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"





#line 509 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 522 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"





#line 533 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"



#line 542 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"










#line 566 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"













#line 585 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"






#line 597 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"







#line 607 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 614 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 628 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"







#line 642 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"





#line 652 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"





#line 667 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"







#line 681 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"





#line 691 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"





#line 709 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"








#line 729 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"






#line 740 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"






#line 756 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"








#line 771 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"






#line 783 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"













#line 810 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"












#line 828 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"






#line 840 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"







#line 850 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 857 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 871 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"







#line 885 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"





#line 895 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"





#line 910 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"







#line 924 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"





#line 934 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"





#line 953 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"








#line 974 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"






#line 985 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"






#line 1001 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"








#line 1016 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"






#line 1028 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"














#line 1052 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"








#line 1063 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 1075 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 1093 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"






#line 1110 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"



#line 1121 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"












#line 1142 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"







#line 1156 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 1164 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"









#line 1174 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"


#line 1177 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"














































#line 1224 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"


#line 1227 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"






#line 1234 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"


#line 1237 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"


















#line 1279 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"











#line 1297 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"











#line 1318 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"








#line 1335 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"







#line 1347 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"






#line 1361 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 1370 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"












#line 1386 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 1396 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 1405 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 1414 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 1438 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 1448 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 1456 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 1465 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 1480 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"










#line 7 "z:/arc-2/arc2-software/include/arcbus.h"
#line 1 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430.h"

#line 7 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430.h"




































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































#line 1773 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430.h"








#line 1783 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430.h"






#line 8 "z:/arc-2/arc2-software/include/arcbus.h"


enum{ERR_SRC_ARCBUS=0,ERR_SRC_SUBSYSTEM=50};







enum{BUS_PRI_EXTRA_LOW=20,BUS_PRI_LOW=50,BUS_PRI_NORMAL=80,BUS_PRI_HIGH=110,BUS_PRI_EXTRA_HIGH=140,BUS_PRI_EXTREME=170,BUS_PRI_CRITICAL=200};








enum{BUS_EV_CMD_NACK=(1<<0),BUS_EV_I2C_COMPLETE=(1<<1),BUS_EV_I2C_NACK=(1<<2),BUS_EV_SPI_COMPLETE=(1<<3),BUS_EV_I2C_ABORT=(1<<4),BUS_EV_SPI_NACK=(1<<5),BUS_EV_I2C_ERR_CCL=(1<<6),BUS_EV_I2C_MASTER_STARTED=(1<<7),BUS_EV_I2C_TX_SELF=1<<8,BUS_EV_I2C_RX_DONE=1<<9};








enum{SUB_EV_PWR_OFF=(1<<0),SUB_EV_PWR_ON=(1<<1),SUB_EV_SEND_STAT=(1<<2),SUB_EV_SPI_DAT=(1<<3),
     SUB_EV_SPI_ERR_CRC=(1<<4),SUB_EV_SPI_ERR_BUSY=(1<<5),SUB_EV_ASYNC_OPEN=(1<<6),SUB_EV_ASYNC_CLOSE=(1<<7),
     SUB_EV_INT_0=(1<< 8),SUB_EV_INT_1=(1<< 9),SUB_EV_INT_2=(1<<10),SUB_EV_INT_3=(1<<11),
     SUB_EV_INT_4=(1<<12),SUB_EV_INT_5=(1<<13),SUB_EV_INT_6=(1<<14),SUB_EV_INT_7=(1<<15)
     };














enum{CMD_PING=7,CMD_NACK=51,CMD_SPI_COMPLETE,CMD_SPI_RDY,CMD_SUB_ON,CMD_SUB_OFF,CMD_SUB_POWERUP,CMD_RESET,CMD_SUB_STAT,
     CMD_SPI_CLEAR,CMD_EPS_STAT,CMD_LEDL_STAT,CMD_ACDS_STAT,CMD_COMM_STAT,CMD_IMG_STAT,CMD_ASYNC_SETUP,
     CMD_ASYNC_DAT,CMD_SPI_DATA_ACTION,CMD_ERR_REQ,CMD_IMG_READ_PIC,CMD_IMG_TAKE_TIMED_PIC,CMD_IMG_TAKE_PIC_NOW,
     CMD_GS_DATA,CMD_TEST_MODE,CMD_BEACON_ON_OFF,CMD_ACDS_CONFIG,CMD_IMG_CLEARPIC,CMD_LEDL_READ_BLOCK,
     CMD_ACDS_READ_BLOCK,CMD_EPS_SEND,CMD_LEDL_BLOW_FUSE,CMD_SPI_ABORT,CMD_BEACON_TYPE,CMD_HW_RESET,CMD_RF_REQ};























enum{RET_SUCCESS=0,ERR_BAD_LEN=-1,ERR_CMD_NACK=-2,ERR_I2C_NACK=-3,ERR_UNKNOWN=-4,ERR_BAD_ADDR=-5,ERR_BAD_CRC=-6,ERR_TIMEOUT=-7,ERR_BUSY=-8,ERR_INVALID_ARGUMENT=-9,ERR_PACKET_TOO_LONG=-10,ERR_I2C_ABORT=-11,ERR_TIME_INVALID=-12,ERR_TIME_TOO_OLD=-13,ERR_I2C_CLL=-14,ERR_I2C_START_TIMEOUT=-15,ERR_I2C_TX_SELF=-16,ERR_DMA_TIMEOUT=-17};


enum{ERR_PK_LEN=1,ERR_UNKNOWN_CMD=2,ERR_SPI_LEN=3,ERR_BAD_PK=4,ERR_SPI_BUSY=5,ERR_BUFFER_BUSY=6,ERR_ILLEAGLE_COMMAND=7,ERR_SPI_NOT_RUNNING=8,ERR_SPI_WRONG_ADDR=9,ERR_PK_BAD_PARM=10};



enum{BUS_ADDR_LEDL=0x11,BUS_ADDR_ACDS=0x12,BUS_ADDR_COMM=0x13,BUS_ADDR_IMG=0x14,BUS_ADDR_CDH=0x15,BUS_ADDR_GC=0};








enum{BUS_CMD_FL_NACK=(0x0002),BUS_CMD_FL_NO_SW_TX=(0x0004)};


enum{SUB_PWR_OFF=0,SUB_PWR_ON};


enum {BUS_I2C_IDLE=0,BUS_I2C_TX=1,BUS_I2C_RX};


enum{BUS_I2C_MASTER_IDLE=0,BUS_I2C_MASTER_PENDING=1,BUS_I2C_MASTER_IN_PROGRESS};


enum{BUS_SPI_IDLE=0,BUS_SPI_SLAVE,BUS_SPI_MASTER};


enum{SPI_DAT_ACTION_INVALID=0,SPI_DAT_ACTION_SD_WRITE,SPI_DAT_ACTION_NULL,SPI_DAT_ACTION_PRINT};


enum{ML_LP_EXIT,ML_LPM0,ML_LPM1,ML_LPM2,ML_LPM3,ML_LPM4};


enum{SPI_BEACON_DAT='B',SPI_IMG_DAT='I',SPI_LEDL_DAT='L',SPI_ERROR_DAT='E',SPI_ACDS_DAT='A'};


enum{ERR_REQ_REPLAY=0};


enum{BUS_ALARM_0=0,BUS_ALARM_1,BUS_NUM_ALARMS};


enum{BUS_BUILD_CDH,BUS_BUILD_SUBSYSTEM};


enum{CMD_PARSE_ADDR0=(1<<0),CMD_PARSE_ADDR1=(1<<1),CMD_PARSE_ADDR2=(1<<2),CMD_PARSE_ADDR3=(1<<3),CMD_PARSE_GC_ADDR=(1<<6),BUS_FLAGS_SW_GC=(1<<7)};


enum{BUS_FLAGS_INVALID_ADDR=0xFF,BUS_FLAGS_ADDR_DISABLED=0xFE,BUS_FLAGS_ADDR_MASK=0x80};


typedef unsigned long ticker;


extern char BUS_lp_mode;


typedef struct{
  struct {
    unsigned char *ptr;
    short len,idx;
  }rx;
  struct {
    const unsigned char *ptr;
    short len,idx;
    unsigned short stat;
  }tx;
  unsigned short mode;
  CTL_MUTEX_t mutex;
}BUS_I2C_STAT;


typedef struct{
  unsigned char *tx,*rx;
  unsigned short len;
  unsigned short mode;
  unsigned char nack;
}BUS_SPI_STAT;


typedef struct{
  BUS_I2C_STAT i2c_stat;
  BUS_SPI_STAT spi_stat;
  CTL_EVENT_SET_t events;
}BUS_STAT;


typedef int (*cmd_parse_Callback)(unsigned char src,unsigned char cmd,unsigned char *dat,unsigned short len,unsigned char flags);


extern BUS_STAT arcBus_stat;


typedef struct cp_cb{

  cmd_parse_Callback cb;

  unsigned char flags;

  unsigned char priority;

  struct cp_cb *next;
}CMD_PARSE_DAT;


typedef struct{

  unsigned short major,minor;
  unsigned short commits;

  unsigned short dty;

  char hash[];
}BUS_VERSION;


extern CTL_EVENT_SET_t SUB_events;


extern unsigned short powerState;


extern const char ARClib_version[];

extern const BUS_VERSION ARClib_vstruct;


void ARC_setup(void);

void ARC_setup_lv(void);


void initCLK(void);

void initCLK_lv(void);


void initARCbus(unsigned char addr);

void initARCbus_pd(unsigned char addr);


void mainLoop(void);

void mainLoop_lp(void);

void mainLoop_testing(void (*cb)(void));



int BUS_cmd_tx(unsigned char addr,void *buff,unsigned short len,unsigned short flags);

int BUS_SPI_txrx(unsigned char addr,void *tx,void *rx,unsigned short len);

unsigned char *BUS_cmd_init(unsigned char *buf,unsigned char id);


ticker get_ticker_time(void);

void set_ticker_time(ticker nt);

ticker setget_ticker_time(ticker nt);


void* BUS_get_buffer(CTL_TIMEOUT_t t, CTL_TIME_t timeout);

void BUS_free_buffer(void);

void* BUS_get_buffer_from_event(void);

void BUS_free_buffer_from_event(void);

const unsigned int BUS_get_buffer_size(void);




int async_isOpen(void);


int async_open(unsigned char addr);


int async_close(void);


int async_TxChar(unsigned char c);
int async_Getc(void);
int async_CheckKey(void);

void async_setup_events(CTL_EVENT_SET_t *e,CTL_EVENT_SET_t txnotfull,CTL_EVENT_SET_t rxnotempty);

void async_setup_close_event(CTL_EVENT_SET_t *e,CTL_EVENT_SET_t closed);

int async_send_data(void);

void reset_bor(unsigned char level,unsigned short source,int err, unsigned short argument);
void reset_por(unsigned char level,unsigned short source,int err, unsigned short argument);




const char *BUS_error_str(int error);

const char* BUS_cmdtostr(unsigned char cmd);

const char* BUS_cmd_resptostr(unsigned char resp);


int BUS_stop_interrupts(void);


void BUS_restart_interrupts(int int_stat);


int BUS_set_alarm(unsigned char num,ticker time,CTL_EVENT_SET_t *e,CTL_EVENT_SET_t event);

ticker BUS_get_alarm_time(unsigned char num);

int BUS_alarm_is_free(unsigned char num);


void BUS_free_alarm(unsigned char num);


void BUS_int_set(unsigned char set);

void BUS_int_clear(unsigned char clear);


int BUS_OA_check(unsigned char addr);

unsigned char BUS_get_OA(void);

unsigned char BUS_set_OA(unsigned char addr);


int BUS_build(void);


void BUS_register_cmd_callback(CMD_PARSE_DAT *cb_dat);


int BUS_I2C_aux_addr(unsigned char addr,unsigned char dest);

unsigned char BUS_flags_to_addr(unsigned char flags);

unsigned char BUS_addr_to_flags(unsigned char addr);


void BUS_delay_msec(CTL_TIME_t timeout);


void BUS_delay_usec(CTL_TIME_t timeout);


#line 4 "z:/software/example_bare_bones/main.c"
#line 1 "z:/arc-2/arc2-software/include/error.h"


#line 1 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/stdio.h"
















#line 1 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/__crossworks.h"






















typedef unsigned char *__va_list;
#pragma intrinsic(__va_base)
































































struct __mbstate_s {
  int __state;
  long __wchar;
};

typedef int (__RAL_mb_encode_t)(char *s,unsigned short wc, struct __mbstate_s *codec);
typedef int (__RAL_mb_decode_t)(unsigned short *pwc, const char *s,unsigned len, struct __mbstate_s *codec);

typedef struct {

  const char *decimal_point;
  const char *thousands_sep;
  const char *grouping;

  const char *int_curr_symbol;
  const char *currency_symbol;
  const char *mon_decimal_point;
  const char *mon_thousands_sep;
  const char *mon_grouping;
  const char *positive_sign;
  const char *negative_sign;

  char int_frac_digits;
  char frac_digits;
  char p_cs_precedes;
  char p_sep_by_space;
  char n_cs_precedes;
  char n_sep_by_space;
  char p_sign_posn;
  char n_sign_posn;
  char int_p_cs_precedes;
  char int_n_cs_precedes;
  char int_p_sep_by_space;
  char int_n_sep_by_space;
  char int_p_sign_posn;
  char int_n_sign_posn;




  const char *day_names;
  const char *abbrev_day_names;
  const char *month_names;
  const char *abbrev_month_names;
  const char *am_pm_indicator;
  const char *date_format;
  const char *time_format;
  const char *date_time_format;
} __RAL_locale_data_t;

enum {
  __RAL_WC_ALNUM = 1,
  __RAL_WC_ALPHA,
  __RAL_WC_CNTRL,
  __RAL_WC_DIGIT,
  __RAL_WC_GRAPH,
  __RAL_WC_LOWER,
  __RAL_WC_UPPER,
  __RAL_WC_SPACE,
  __RAL_WC_PRINT,
  __RAL_WC_PUNCT,
  __RAL_WC_BLANK,
  __RAL_WC_XDIGIT
};

enum {
  __RAL_WT_TOLOWER = 1,
  __RAL_WT_TOUPPER
};

typedef struct {

  int (*__isctype)(int, int);
  int (*__toupper)(int);
  int (*__tolower)(int);


  int (*__iswctype)(long, int);
  long (*__towupper)(long);
  long (*__towlower)(long);


  int (*__wctomb)(char *s,unsigned short wc, struct __mbstate_s *state);
  int (*__mbtowc)(unsigned short *pwc, const char *s,unsigned len, struct __mbstate_s *state);
} __RAL_locale_codeset_t;

typedef struct {
  const char *name;
  const __RAL_locale_data_t *data;
  const __RAL_locale_codeset_t *codeset;
} __RAL_locale_t;



typedef struct __locale_s {
  const __RAL_locale_t *__category[5];
} *__locale_t;


const __RAL_locale_t *__user_find_locale(const char *locale);



#line 202 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/__crossworks.h"
const __RAL_locale_t *__RAL_find_locale(const char *locale);



#line 210 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/__crossworks.h"
const __RAL_locale_t *__RAL_global_locale_category(int __category);



#line 218 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/__crossworks.h"
const __RAL_locale_t *__RAL_locale_category(__locale_t __locale, int __category);



#line 225 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/__crossworks.h"
extern struct __locale_s __RAL_global_locale;



#line 232 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/__crossworks.h"
extern const __RAL_locale_t __RAL_c_locale;


extern const __RAL_locale_codeset_t __RAL_codeset_ascii;
extern const __RAL_locale_codeset_t __RAL_codeset_utf8;

extern const unsigned char __RAL_ascii_ctype_map[128];

extern const char __RAL_c_locale_day_names[];
extern const char __RAL_c_locale_abbrev_day_names[];
extern const char __RAL_c_locale_month_names[];
extern const char __RAL_c_locale_abbrev_month_names[];

extern const char __RAL_data_utf8_period[];
extern const char __RAL_data_utf8_comma[];
extern const char __RAL_data_utf8_space[];
extern const char __RAL_data_utf8_plus[];
extern const char __RAL_data_utf8_minus[];
extern const char __RAL_data_empty_string[];

const char *__RAL_string_list_decode(const char *str, int index);
int __RAL_string_list_encode(const char *list, const char *str);


void __RAL_init_mbstate(struct __mbstate_s *state);

int __RAL_ascii_wctomb(char *s,unsigned short wc, struct __mbstate_s *state);
int __RAL_ascii_mbtowc(unsigned short *pwc, const char *s,unsigned len, struct __mbstate_s *state);

int __RAL_utf8_wctomb(char *s,unsigned short wc, struct __mbstate_s *state);
int __RAL_utf8_mbtowc(unsigned short *pwc, const char *s,unsigned len, struct __mbstate_s *state);

int __RAL_mb_max(const struct __locale_s *loc);

struct timeval;


int __RAL_compare_locale_name(const char *str0, const char *str1);


extern int (*__user_set_time_of_day)(const struct timeval *tp);
extern int (*__user_get_time_of_day)(struct timeval *tp);


typedef struct { unsigned short min, max, map; } __RAL_unicode_map_bmp_range_t;
typedef struct { unsigned short cp, map; } __RAL_unicode_map_bmp_singleton_t;


typedef struct { unsigned short min, max; } __RAL_unicode_set_bmp_range_t;
typedef struct { long min, max; } __RAL_unicode_set_nonbmp_range_t;


int __RAL_unicode_iswctype(long ch, int ty);
long __RAL_unicode_towupper(long ch);
long __RAL_unicode_towlower(long ch);


int __RAL_unicode_map_range_search(const void *k0, const void *k1);
int __RAL_unicode_map_singleton_search(const void *k0, const void *k1);


int __RAL_unicode_set_bmp_range_search(const void *k0, const void *k1);
int __RAL_unicode_set_nonbmp_range_search(const void *k0, const void *k1);

typedef const char * (*__RAL_error_decoder_fn_t)(int error);

typedef struct __RAL_error_decoder_s
{
  __RAL_error_decoder_fn_t decode;
  struct __RAL_error_decoder_s *next;
} __RAL_error_decoder_t;

void __RAL_register_error_decoder(__RAL_error_decoder_t *decoder);

extern __RAL_error_decoder_t *__RAL_error_decoder_head;

const char *__RAL_decode_error(int num);


#line 18 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/stdio.h"















typedef unsigned size_t;





#line 45 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/stdio.h"
int putchar(int __c);



#line 54 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/stdio.h"
int getchar(void);



#line 66 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/stdio.h"
int puts(const char *__s);



#line 83 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/stdio.h"
char *gets(char *__s);



#line 102 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/stdio.h"
int sprintf(char *__s, const char *__format, ...);



#line 130 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/stdio.h"
int snprintf(char *__s, size_t __n, const char *__format, ...);



#line 166 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/stdio.h"
int vsnprintf(char *__s, size_t __n, const char *__format, __va_list __arg);



#line 412 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/stdio.h"
int printf(const char *__format, ...);



#line 432 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/stdio.h"
int vprintf(const char *__format, __va_list __arg);



#line 461 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/stdio.h"
int vsprintf(char *__s, const char *__format, __va_list __arg);



#line 662 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/stdio.h"
int scanf(const char *__format, ...);



#line 682 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/stdio.h"
int sscanf(const char *__s, const char *__format, ...);



#line 708 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/stdio.h"
int vscanf(const char *__format, __va_list __arg);



#line 732 "c:/program files (x86)/rowley associates limited/crossworks for msp430 3.0/include/stdio.h"
int vsscanf(const char *__s, const char *__format, __va_list __arg);


















typedef struct __RAL_FILE FILE;


typedef long fpos_t;
extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;
void clearerr(FILE *);
int fclose(FILE *);
int feof(FILE *);
int ferror(FILE *);
int fflush(FILE *);
int fgetc(FILE *);
int fgetpos(FILE *, fpos_t *);
char *fgets(char *, int, FILE *);
FILE *fopen(const char *, const char *);
int fprintf(FILE *, const char *, ...);
int fputc(int, FILE *);
int fputs(const char *, FILE *);
size_t fread(void *, size_t, size_t, FILE *);
FILE *freopen(const char *, const char *, FILE *);
int fscanf(FILE *, const char *, ...);
int fseek(FILE *, long, int);
int fsetpos(FILE *, const fpos_t *);
long ftell(FILE *);
size_t fwrite(const void *, size_t, size_t, FILE *);
int getc(FILE *);
void perror(const char *);
int putc(int, FILE *);
int remove(const char *);
int rename(const char *, const char *);
void rewind(FILE *);
void setbuf(FILE *, char *);
int setvbuf(FILE *, char *, int, size_t);
FILE *tmpfile(void);
char *tmpnam(char *);
int ungetc(int, FILE *);
int vfprintf(FILE *, const char *, __va_list);
int vfscanf(FILE *, const char *, __va_list);






#line 4 "z:/arc-2/arc2-software/include/error.h"
#line 1 "z:/arc-2/arc2-software/include/arcbus.h"






















































































































































































































































































































































#line 5 "z:/arc-2/arc2-software/include/error.h"
#line 1 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430.h"

#line 7 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430.h"




































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































#line 1773 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430.h"








#line 1783 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/include/msp430.h"






#line 6 "z:/arc-2/arc2-software/include/error.h"


enum{ERR_ADDR_START=0,ERR_ADDR_END=64};


enum{ERR_TABLE_FULL=1,ERR_INVALID_RANGE,ERR_OVERLAP};


enum{ERR_FLAGS_LIB=(0x0001),ERR_FLAGS_SUBSYSTEM=(0x0002)};


enum{ERR_LEV_DEBUG=0,ERR_LEV_INFO=30,ERR_LEV_WARNING=60,ERR_LEV_ERROR=90,ERR_LEV_CRITICAL=120};


typedef struct{

  unsigned char valid;

  unsigned char level;

  unsigned short source;

  int err;

  unsigned short argument;

  ticker time;
}ERROR_DAT;


void error_init(void);


void error_recording_start(void);


typedef const char* (*ERR_DECODE)(char buf[150],unsigned short source,int err, unsigned short argument);


unsigned char set_error_level(unsigned char lev);


unsigned char get_error_level(void);


void report_error(unsigned char level,unsigned short source,int err, unsigned short argument);


void error_log_replay(unsigned short num,unsigned char level);


int clear_saved_errors(void);


void error_log_mem_replay(unsigned char *dest,unsigned short size,unsigned char level,unsigned char *buf);


void print_spi_err(const unsigned char *dat,unsigned short len);


int err_register_handler(char min, char max,ERR_DECODE decode,unsigned short flags);


#line 5 "z:/software/example_bare_bones/main.c"
#line 1 "z:/arc-2/arc2-software/include/terminal.h"




  typedef struct{
    const char* name;
    const char* helpStr;

    int (*cmd)(char **argv,unsigned short argc);
  }CMD_SPEC;


  extern const CMD_SPEC cmd_tbl[];


  int helpCmd(char **argv,unsigned short argc);

  void terminal(void *p);


  unsigned short make_args(char *argv[],const char *src,char *dst);



#line 6 "z:/software/example_bare_bones/main.c"
#line 1 "z:/arc-2/arc2-software/include/version.h"
#line 1 "z:/arc-2/arc2-software/include/arcbus.h"






















































































































































































































































































































































#line 2 "z:/arc-2/arc2-software/include/version.h"


const char ARClib_version[]="2";
const BUS_VERSION ARClib_vstruct={2,0,241,(0),"g9885cde"};
#line 7 "z:/software/example_bare_bones/main.c"
#line 1 "z:/arc-2/arc2-software/include/uca2_uart.h"



#line 1 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"





























#line 59 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"



















#line 81 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 89 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"







#line 116 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




































#line 162 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"






#line 182 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"











#line 198 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 206 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 214 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 227 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"





#line 236 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"























#line 262 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"






#line 275 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 285 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 293 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"







#line 318 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"















#line 336 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"





#line 349 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"






#line 364 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"





#line 388 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"










#line 419 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"







#line 446 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"





#line 471 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"














#line 490 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 498 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"





#line 509 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 522 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"





#line 533 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"



#line 542 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"










#line 566 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"













#line 585 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"






#line 597 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"







#line 607 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 614 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 628 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"







#line 642 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"





#line 652 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"





#line 667 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"







#line 681 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"





#line 691 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"





#line 709 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"








#line 729 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"






#line 740 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"






#line 756 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"








#line 771 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"






#line 783 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"













#line 810 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"












#line 828 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"






#line 840 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"







#line 850 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 857 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 871 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"







#line 885 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"





#line 895 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"





#line 910 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"







#line 924 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"





#line 934 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"





#line 953 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"








#line 974 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"






#line 985 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"






#line 1001 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"








#line 1016 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"






#line 1028 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"














#line 1052 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"








#line 1063 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 1075 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 1093 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"






#line 1110 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"



#line 1121 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"












#line 1142 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"







#line 1156 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 1164 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"









#line 1174 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"


#line 1177 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"














































#line 1224 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"


#line 1227 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"






#line 1234 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"


#line 1237 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"


















#line 1279 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"











#line 1297 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"











#line 1318 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"








#line 1335 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"







#line 1347 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"






#line 1361 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 1370 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"












#line 1386 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 1396 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 1405 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 1414 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 1438 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 1448 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 1456 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 1465 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 1480 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"










#line 5 "z:/arc-2/arc2-software/include/uca2_uart.h"
#line 1 "z:/arc-2/arc2-software/include/uart_queue.h"



#line 1 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"





























#line 59 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"



















#line 81 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 89 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"







#line 116 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




































#line 162 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"






#line 182 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"











#line 198 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 206 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 214 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 227 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"





#line 236 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"























#line 262 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"






#line 275 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 285 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 293 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"







#line 318 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"















#line 336 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"





#line 349 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"






#line 364 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"





#line 388 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"










#line 419 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"







#line 446 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"





#line 471 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"














#line 490 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 498 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"





#line 509 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 522 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"





#line 533 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"



#line 542 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"










#line 566 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"













#line 585 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"






#line 597 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"







#line 607 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 614 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 628 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"







#line 642 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"





#line 652 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"





#line 667 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"







#line 681 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"





#line 691 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"





#line 709 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"








#line 729 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"






#line 740 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"






#line 756 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"








#line 771 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"






#line 783 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"













#line 810 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"












#line 828 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"






#line 840 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"







#line 850 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 857 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 871 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"







#line 885 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"





#line 895 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"





#line 910 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"







#line 924 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"





#line 934 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"





#line 953 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"








#line 974 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"






#line 985 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"






#line 1001 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"








#line 1016 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"






#line 1028 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"














#line 1052 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"








#line 1063 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 1075 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 1093 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"






#line 1110 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"



#line 1121 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"












#line 1142 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"







#line 1156 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 1164 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"









#line 1174 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"


#line 1177 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"














































#line 1224 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"


#line 1227 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"






#line 1234 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"


#line 1237 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"


















#line 1279 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"











#line 1297 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"











#line 1318 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"








#line 1335 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"







#line 1347 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"






#line 1361 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 1370 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"












#line 1386 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 1396 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 1405 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 1414 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 1438 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 1448 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 1456 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 1465 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"




#line 1480 "c:/users/cjodell2/appdata/local/rowley associates limited/crossworks for msp430/v3/packages/libraries/libctl/include/ctl.h"










#line 5 "z:/arc-2/arc2-software/include/uart_queue.h"





  struct UART_Tx{
    CTL_BYTE_QUEUE_t queue;
    char done;
    unsigned char buf[(150)];
  };


  struct UART_Rx{
    CTL_BYTE_QUEUE_t queue;
    unsigned char buf[(150)];
  };


#line 6 "z:/arc-2/arc2-software/include/uca2_uart.h"


  int UCA2_TxChar(unsigned char c);

  int UCA2_Getc(void);

  void UCA2_init_UART(unsigned int port,unsigned int tx,unsigned int rx);

  int UCA2_CheckKey(void);




  void UCA2_BR9600(void);
  void UCA2_BR38400(void);
  void UCA2_BR57600(void);


  extern struct UART_Tx UCA2_TxBuf;
  extern struct UART_Rx UCA2_RxBuf;


  void UCA2_setup_events(CTL_EVENT_SET_t *e,CTL_EVENT_SET_t txnotfull,CTL_EVENT_SET_t rxnotempty);


#line 8 "z:/software/example_bare_bones/main.c"
#line 1 "z:/software/example_bare_bones/pins.h"































#line 9 "z:/software/example_bare_bones/main.c"
#line 1 "z:/software/example_bare_bones/subsystem.h"



void sub_events(void *p);


#line 10 "z:/software/example_bare_bones/main.c"


CTL_TASK_t terminal_task,sub_task;


unsigned terminal_stack[2000];

unsigned sub_stack[1000];


int __putchar(int c){
  return UCA2_TxChar(c);
}


int __getchar(void){
  return UCA2_Getc();
}

void main(void){

(PDOUT_L)=0xFF;
(PDDIR_L)=0xFF;


  ARC_setup();

  set_error_level(0);

  UCA2_init_UART(3,5,6);


  initARCbus(0x1F);

(PDOUT_L)=(0x0001);

  ctl_task_run(&terminal_task,BUS_PRI_LOW,terminal,"Example Bare Bones program ready","terminal",sizeof(terminal_stack)/sizeof(terminal_stack[0])-2,terminal_stack-1,0);
  ctl_task_run(&sub_task,BUS_PRI_HIGH,sub_events,0,"SUB_events",sizeof(sub_stack)/sizeof(sub_stack[0])-2,sub_stack-1,0);


  mainLoop();
}


char *err_decode(char buf[150], unsigned short source,int err, unsigned short argument){
  sprintf(buf,"source = %i, error = %i, argument = %i",source,err,argument);
  return buf;
}


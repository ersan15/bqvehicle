#include  <msp430g2553.h>
void gecikme(void);                     
int main(void)
{
  WDTCTL = WDTPW + WDTHOLD;                 

  P2DIR = 0xFF;
  P2SEL = 0x00;
  P2OUT = 0xFF;

  P1DIR = 0xFF;
  P1OUT = 0xFF;

  /*   for (;;)  {
   P2OUT = 0x00;
   gecikme();
   P1OUT = 0x111; 
   P2OUT = 0x40;
   gecikme();
   P1OUT = 0x92;
   P2OUT = 0x00;
   gecikme();
   P1OUT = 0x54;
   P2OUT = 0x00;
   gecikme();
   P1OUT = 0x38;
   gecikme();
   
   
   P1OUT = 0x155;
   P2OUT = 0x40;
   gecikme();
   P1OUT = 0xBA;
   P2OUT=0x00;
   gecikme();
   P1OUT = 0x92;
   P2OUT = 0x00;*/


  while(1){
    P1OUT = 0x15;

    gecikme();
    gecikme();
    gecikme();
    gecikme();
    gecikme();
    gecikme();
    gecikme();
    gecikme();
    gecikme();
    gecikme();
    gecikme();
    gecikme();


    P1OUT = 0x06;// sola gitmeye
    gecikme();
    gecikme();
    gecikme();
    gecikme();
    gecikme();
    gecikme();
    gecikme();
    gecikme();
    gecikme();
    gecikme();
    gecikme();
    gecikme();

    P1OUT = 0xA; //one donus
    gecikme();
    gecikme();
    gecikme();
    gecikme();
    gecikme();
    gecikme();
    gecikme();
    gecikme();
    gecikme();
    gecikme();
    gecikme();

    P1OUT = 0x19;
    gecikme();
    gecikme();
    gecikme();
    gecikme();
    gecikme();
    gecikme();
    gecikme();
    gecikme();
    gecikme();
    gecikme();
    gecikme();

    /*
  P1OUT = 0x06;// sola gitmeye
     //  P1OUT = 0xA; //one donus
     // P1OUT = 0x19; //saga donus
     //P1OUT = 0x15; //geri
     gecikme();
     gecikme();
     gecikme();
     gecikme();
     gecikme();
     */

  }

  return 0;
}
void gecikme (void){
  volatile unsigned int i;
  for(i=0 ; i < 50000 ; i++); 
}


void gecikme2 (void){
  volatile unsigned int i;
  for(i = 0; 100000;i++);
}

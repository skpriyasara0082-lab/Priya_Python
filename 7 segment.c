#include<pic.h>
int main()
{
 unsigned char seg[10]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
 unsigned int i;
 unsigned char a;
 TRISB=0x00;
 PORTB=0x00;
 while(1)
 {
  for(a=0;a<9;a++)
  {
   PORTB=seg[a];
   for(i=0;i<16000;i++);
  }
 }
 return 0;
}
#include <reg51.h>
sbit sw1= P2^1;
sbit sw2= P2^2;
void delay(unsigned int);
void main(void)
{
	sw1 = 0;
	sw2 = 0;
	while(1)
	{
		if(sw1==0 && sw2==0)
		{
			P1=0x00;
		}
		else if (sw1==0 && sw2==1)
		{
			P1=0xA0;
				delay(50);
				P1=0x00;
				delay(50);
			
		}
		else if (sw1==1 && sw2==0)
		{
			P1=0x0B;
				delay(50);
				P1=0x00;
				delay(50);
		}
		else if (sw1==1 && sw2==1)
		{
			P1=0xCD;
			delay(50);
			P1=0x00;
			delay(50);
		}
	}
}
void delay (unsigned int t)
{
	unsigned int i,j;
	for(i=0;i<t;i++)
	for(j=0;j<1275;j++);
}

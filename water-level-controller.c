// Program to make a water level indicator and controller

#include<reg51.h>

sbit AA=P3^0;
sbit BB=P3^1;
sbit CC=P3^2;
sbit DD=P3^3;


sbit rs=P1^0;
sbit rw=P1^1;
sbit  e=P1^2;


sbit MOTOR=P3^4;




void delay(int X)
{
int i,j;
for(i=0;i<X;i++)
  for(j=0;j<1000;j++);
}

void write(int j)
{
rs=1;
rw=0;
P2=j;
e=1;
delay(10);
e=0;
return;
}

void cmd(int j)
{
P2=j;
rs=0;
rw=0;
e=1;
delay(10);
e=0;
return;
}

void puts(char *a)
{
unsigned int p=0;
for(;a[p]!=0;p++)
write(a[p]);
}

void lcd_init(void)
{
cmd(0x38);
delay(10);
cmd(0x0c);
delay(10);
cmd(0x01);
cmd(0x06);
cmd(0x80);
}

void main()
{
AA=BB=CC=DD=0;


while(1)
{
  while(AA==0&&BB==0&&CC==0&&DD==0)
  {
   lcd_init();
   puts("  TANK EMPTY ");
   lcd_init();
   puts("  MOTOR  ON");
   MOTOR=1;


  }
  while(AA==1&&BB==0&&CC==0&&DD==0)
  {
   lcd_init();
   puts("WATER QUARTER");

  }
 while(AA==1&&BB==1&&CC==0&&DD==0)
  {
   lcd_init();
   puts("WATER HALF");
  }
 while(AA==1&&BB==1&&CC==1&&DD==0)
  {
   lcd_init();
   puts("WATER 3/4 FULL");
  }


    while(AA==1&&BB==1&&CC==1&&DD==1)
  {
   lcd_init();
   puts("   TANK  FULL  ");
   lcd_init();
   puts("   MOTOR  OFF  ");
   MOTOR=0;

  }





 }
}

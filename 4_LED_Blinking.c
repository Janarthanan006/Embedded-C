#include <AT89S52.h> /* include header for AT89S52 */

void wait (char);

void main()
{
  while(1)
  {
  P0_0=0;
  P0_1=0;
  P0_2=0;
  P0_3=0;
   wait(100); /* can be set upto 255 */
  P0_0=1;
  P0_1=1;
  P0_2=1;
  P0_3=1;
   wait(100);
   
  P0_4=0;
  P0_5=0;
  P0_6=0;
  P0_7=0;
   wait(100); /* can be set upto 255 */
  P0_4=1;
  P0_5=1;
  P0_6=1;
  P0_7=1;
   wait(100);
  }
}

void wait (char val)
{
 char i;
 for (i=0;i<val;i++)
 {}
}

#include <AT89S52.h> /* include header for AT89S52 */

void wait (char);

void main()
{
  while(1)
  {
  P2_0= !P2_0;
  wait(100); /* can be set upto 255 */
  }
}

void wait (char val)
{
 char i;
 for (i=0;i<val;i++)
 {}
}

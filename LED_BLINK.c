#include <AT89S52.h> /* include header for AT89S52 */

void wait (void);

void main()
{
  while(1)
  {
  P2_0= 0;
  wait();
  P2_0= 1;
  wait();
  }
}

void wait (void)
{
 char i;
 for (i=0;i<50;i++)
 {}
}

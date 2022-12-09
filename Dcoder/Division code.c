#include <stdio.h>

int main()
{
  float dd,dv;
  float qu,re;
  printf("Enter your Dividend\n");
  scanf("%d",&dd);
  printf("Enter your Divisor\n");
  scanf("%d",&dv);
  
  qu = dd / dv;
  re = (int)dd % (int)dv;
  
  printf("\nyour quotient is: %f",qu);
  printf("\nyour Reminder is: %d",re);
}
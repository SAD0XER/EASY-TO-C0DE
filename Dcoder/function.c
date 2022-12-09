#include <stdio.h>

//Compiler version gcc  6.3.0
int addition();
void main()
{
  printf("Hello, World!__input is here:");
  addition (); // function call
}
int addition ()
{
  int n1, n2, sum;
  scanf ("%d%d",&n1,&n2);
  sum = n1 + n2;
  printf ("%d + %d = %d",n1,n2,sum);
}
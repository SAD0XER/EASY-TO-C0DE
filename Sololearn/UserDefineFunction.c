/*this is my first functoin code.*/

#include <stdio.h>

//Compiler version gcc  6.3.0

long addition(); // user define function

//=============================
void main()
//=============================
{
  printf("___Hello, World!__");
addition (); // function call
}// code finish here.

//[[[[[[[[[[[[[[0]]]]]]]]]]]]]]
long  addition () // work of the function.
{
  long n1, n2, sum;
  scanf ("%ld%ld",&n1,&n2);
  sum = n1 + n2;
  printf ("\n\n\n%ld + %ld = %ld",n1,n2,sum);
}

// #kak cheshta.

// do the comment..
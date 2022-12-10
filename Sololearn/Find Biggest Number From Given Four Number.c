/*
coder name: SADOXER

I WROTE this code after the long time.
because of my some work.
This code gives me sometimes wrong result.
so, please rate me and suggest me some tips for BECOME A best programmer.😄
*/

//------------------//

#include <stdio.h>

int bignum (int a, int b, int c, int d)
{
  int x = 0;
  while (x < 4)
  {
      if ( a > b)
      return a;
      else if (a > c)
      return b;
      else if ( a > d)
      return d;
      else
      return b;
      x++;
  
  } // end of the loop. 
} // end of the function.

//|•|•|•|•|•|•|•|•|•//

int main()
{
  int a, b, c, d;
  
  //printf ("Enter the four number: ");
  
  scanf ("NUM 1: %d\nNUM 2: %d\nNUM 3: %d\nNUM4: %d", &a, &b, &c, &d); // taking user input.
  
  int answer = bignum(a,b,c,d); // calling a function and whatever returned value from the function thats assign to the "answer" variable.
  
  printf ("%d",answer); // see, the answer\output.
  
  return 0;
}
#include <stdio.h>

int bignum (int a, int b, int c, int d)
{
  int x = 0;
  while (x < 4)
  {
      if ( a > b )
      return a;
      else if (a > c )
      return b;
      else if ( a > d )
      return d;
      else
      return b;
      x++;
  } // end of the loop.
} // end of the function.

int main()
{
  int a, b, c, d;
  printf ("Enter the four number: ");
  scanf ("%d %d %d %d", &a, &b, &c, &d);
  int ans = bignum(a,b,c,d);
  printf ("%d",ans);
  return 0;
}
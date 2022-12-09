// THIS PROGRAM FOR PRACTICE PURPOSE ONLY.

#include <stdio.h>
#include <conio.h>

#define p printf
#define s scanf

// chapter :- functions 
int division(); // declaration of function
void main () 
{
  clrscr ();
  division();
  getch();
  return 0;
}
int division ()
{
  int fn, sn;
  p ("ENTER TWO NUMBER\n");
  s ("%d %d", &fn, &sn);
  p ("DIVISION OF NUMBERS IS: \n %d / %d = %d \n\n ",fn ,sn ,fn/sn);
}
/*--------------------------------------------------------------------*/

 

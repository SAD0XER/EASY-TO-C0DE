#include <stdio.h>
#include <conio.h>
#define p printf
#define s scanf
int main ()
{ clrscr();
  int a,b,c;
  p ("MCQ EXAM\n\nFill In The Blanks\nQ.1] how many day's in the one year ?\n1) 364\n2) 360\n3) 365\n4) 366\nANSWER:_");
  s("%d",&a);
  p("Q.2]what is tbe answer of 13×(6-2)+8=?\n1) 20\n2) 60\n3) 156\n4) 111\n ANSWER:_");
  s("%d",&b);
  
  p("\n==__YOUR RESULT__==");
  if(a==3)
    p("\ncorrect !\nyou got 2 marks");
  else
    p("\nwrong !\nyou got zer0000");
  
  if (b==2) 
    p("\ncorrect !\nyou got 2 marks");
  else 
    p("\nwrong !\nyou got zer000");
   if (a==3 || b==2)
   p("\nyour marks is 2 + 2 = 4");
  getch ();
}
#include<stdio.h>
#include<conio.h>
#define p printf 
#define s scanf

int main ()

{
  int array_1[10],array_2[10];
  int pro[10];
  int a;
  clrscr();
    
    p ("ENTER TEN ELEMENT IN THE ARRAY 1:");

for (a=0;a<10;a++)
{
  s("\n%d",&array_1[a]);
}

//<<
p ("\n ENTER TEN ELEMENT IN THE ARRAY 2:");
  
for (a=0;a<10;a++)
{
  s("\n%d",array_2[a]);
 
  
}

//===============================
  
p ("product of the array is:");
for (a=0;a<10;a++)
{
  pro[a] = array_1[a] * array_2[a];

//==
  p ("Product is \t%d * \t%d = \t%d",array_1[a],array_2[a],pro[a]);
}
getch();
return 0;
}

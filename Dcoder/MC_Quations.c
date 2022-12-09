#include <stdio.h>



int result(int e, int f, int g);
  

int main() 
{ 
  int a,b,c;
  //int m1,m2,m3;

//Qua. 1  
  printf ("Q.1\nWhat is the molecular formula of Water?\n");
  printf (" 1:Ho2\n 2:2Ho\n 3:Ho\n 4:H20\n");
  scanf  ("%s",&a);

//Qua. 2   
  printf ("\nQ.2\n16×2.625=?\n");
  printf (" 1:32\n 2:42\n 3:40\n 4:38\n");
  scanf  ("%d",&b);
  
//Qua. 3 
  printf ("\nQ.3\nHow Many Planets Are in our Galaxy?\n");
  printf (" 1:10\n 2:9\n 3:8\n 4:7\n");
  scanf  ("%s",&c);

result(a,b,c);

return 0;
}

int result(int e, int f, int g)
{
  //printf ("sad\n\n");
  
  if (e =='4'|| e =="H2O"|| e =="h2o")
  {
    printf ("Correct 2 Marks \n\n");
    //n1=2;
  }
  else
  {
    printf ("Wrong 0 Marks\n\n");
    //n1=0;
  }
  if (f == 2|| f =='42')
  {
    printf ("Correct 2 Marks\n\n");
   // n2=2;
  }
  else
  {
    printf ("Wrong 0 Marks\n\n");
    //n2=0;
  }
  if (g =='3'|| g =='8')
  {
    printf ("Correct 2 Marks\n\n");
   // n3=2;
  }
  else
  {
    printf ("Wrong 0 Marks\n\n");
   // n3=0;
  }
  
// return 0;
}
 
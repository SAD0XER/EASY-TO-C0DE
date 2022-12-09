#include <stdio.h>
//#include <conio.h>

int main() {
  
  char a,b,c;
  int M1,M2,M3,TM;
  printf ("What is the molecular formula of Water?\n");
  printf (" 1:Ho2\n 2:2Ho\n 3:Ho\n 4:H20\n");
  scanf  ("%s",&a);
  
 
  printf ("16×2.625=?\n");
  printf (" 1:32\n 2:42\n 3:40\n 4:38\n");
  scanf  ("%s",&b);
  

 
  printf ("How Many Planets Are in our Galaxy?\n");
  printf (" 1:10\n 2:9\n 3:8\n 4:7\n");
  scanf  ("%s",&c);
 
  
printf ("Result\n");

if (a=='4'|| a=="H2O"|| a=="h2o"){
    printf ("Q1:Correct  (2 Marks)\n");
    M1=2;}
  else
    {printf ("Q1:Wrong (0 Marks)\n");
    M1=0;
   }
   
   if(b=='2'|| b=='42'){
   
    printf ("Q2:Correct  (2 Marks)\n");
    M2= 2; }
  else
   { printf ("Q2:Wrong  (0 Marks)\n");
    M2= 0;
   }
   
    if (c=='3'|| c=='8'){
    printf ("Q3:Correct  (2 Marks)\n");
    M3= 2;}
 else
   {
     printf ("Q3:Wrong  (0 Marks)\n");
   M3= 0;
   }

TM= M1+M2+M3;
  
    printf("Your Total Marks is: %d",TM);
    return 0;
}

// JUST SWITCH IT...
/*
AUTHOR: <~|《《《Š.Â.Ď》》》|~>

DATE: 31/12/2020...
NAME: simple calculator
*/
//==========================================
#include <stdio.h>
#define p printf
//#define s scanf
#define sw switch
#define ca case
#define de default
//==========================================
int main() 

{ 
float n1,n2;
char o; // o means options
p("\"Give input\"\a\n\n\n\n");
scanf("%c",&o); 

/* ⚠️CAUTIOUS⚠️
which operation do you wants to perform,
that enter first>
Enter Symbol: from '+','-','*','/','%'.
and your two integer number
(after the 1st integer don't forgot to press enter. and so on for other int.)
*/
//==========================================
sw (o)   // switch

    {
    ca '+': // 01
    p("Enter your first number:\n");   scanf("%f",&n1); // enter first number.
    p("Enter your second number:\n");
    scanf("%f",&n2);
    p("the sum of your number is %f + %f = %3.3f\n",n1,n2,(int)n1+n2);
    break;
//==========================================    
    ca '-': // 02  
    p("Enter your first number:\n");
    scanf("%f",&n1); // enter first number.
    p("Enter your second number:\n");
    scanf("%f",&n2); // Enter second number.
    p("the substraction of your number is %f - %f = %2.3f\n",n1,n2,n1-n2);
    break;
//==========================================   
    ca '/': // 03
    p("Enter your first number:\n");
    scanf("%f",&n1); // enter first number.
    p("Enter your second number:\n");
    scanf("%f",&n2); // Enter your second number.
    p("the division of your number is %f / %f = %2.3f\n",n1,n2,n1/n2);
    break;
//==========================================   
    ca '*': // 04
    p("Enter your first number:\n");
    scanf("%f",&n1); // enter first number.
    p("Enter your second number:\n");
    scanf("%f",&n2); // Enter your second number.
    p("the multiplication of your number is %f * %f = %2.3f\n",n1,n2,n1*n2);
    break;

//==========================================    
    
    de:      // 00
    p("\"Something went wrong.! dear..\n try it again !\"");
    }// end of switch 

//===================   
} //end of code (block)   
/*
  ⏬⏬⏬⏬⏬⏬
how was the code ?
ans: (tell me in comment box)
    ANY SUGGETIONS ?
    &
    ⚠️DON'T FORGET TO LIKE THE CODE.
    BECAUSE when i see the likes that time i feel very well & its inspiring for me.⚠️
      ⏫⏫⏫⏫⏫⏫
*/
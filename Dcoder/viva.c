/* PROGRAM NAME : if you participant of
sports you will get 5 marks extra..

DETE: 24/12/2020.. DAY: thrusday.
 
*/
#include <stdio.h>  // syntax
#define p printf 
#define s scanf

int main() // main file 

/*open close curly brackets are the 
CODE BLOCK.*/
{ 

// declaration of variables. 

char ans;

p("ARE YOU PARTICIPANT IN SCHOOLS SPORTS ? \n");
s ("%c",&ans);

if(ans=='y'||'Y')
{
    float marks;                   p("\t\t\t\tCONGRATULATIONS ! :D \nYou got extra +5 Marks.\n");
    
    p ("TELL ME YOUR TOTAL MARKS IN WRITTEN EXAM.! HOW MANY ?\n");
    
    s("%f",&marks);
    
    p("\t\t\tYOUR MARKS: %f\n",marks);
    
    float total=marks+5.00;
    
p ("NOW, YOUR NEW MARKS ARE:%f\n",total);
    
}
else if (ans == 'n'||'N')
{
    p("\t\t YOU DON'T PARTICIPANTE IN SCHOOLS SPORTS...\nSO, YOU DIDEN'T GEY ANY MARKS.\n");
}
else
{
    p("\t\t\tSORRY WRONG ENTRY MAN.\n");
}


    return 0;
}
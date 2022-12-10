/* PROGRAM NAME : if you participant of
sports you will get 5 marks extra..

DETE: 24/12/2020.. DAY: thrusday.
 
*/
#include <stdio.h>  // syntax
#define p printf 
//#define s scanf

int main() // main file 

/*open close curly brackets are the 
CODE BLOCK.*/
{ 

// declaration of variables. 
    char ans;

    p("ARE YOU PARTICIPANT IN SCHOOLS SPORTS ? \n");
    scanf("%c",&ans);

//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
    if(ans=='y'||'Y')
    {
    
    float marks; 
                                      p("\n\n\t\t\t\tCONGRATULATIONS ! :D \nYou got extra +5 Marks.\n");
    
    p("\n\nTELL ME YOUR TOTAL MARKS IN WRITTEN EXAM.! HOW MANY ?\n");
    
    scanf("%f",&marks);
    
    p("\n\t\t\tYOUR MARKS: %f\n",marks);
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>    
    float total=marks+5.00;
    
p("\nNOW, YOUR NEW MARKS ARE:%f\n",total);
    }
//<><><><><><><><><><><><><><><><><>
// if you don't give any value. 
// the output will be 5. 
/* 
because initial value of float is 0.0
*/
//<><><><><><><><><><><><><><><><><>
    else 

{
    p("\t\t YOU DON'T PARTICIPANTE IN SCHOOLS SPORTS...\nSO, YOU DIDEN'T GEY ANY MARKS.\n");
}

   return 0;
}
/*
 PLEASE THIS CODE COMPILE AND RUN IN ANOTHER APPLICATIN AND IDE.
*/
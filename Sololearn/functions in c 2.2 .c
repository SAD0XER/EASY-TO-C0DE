#define p printf
#include <stdio.h>

// TYPE 2.B FUNCTIONS
/*
 first declare the function then after main program declare a body of function.
*/
void print_box(int x); //declaration of function
 // body of function.

float main() //main program
{
    float Y=10.3237482;
    p("the value of Y is : %.3f",Y);
    
    print_box(10);
    
    return 0;
}
// working body of program
void print_box(int x)
{
for(int z=0; z<=x;z++)
p("%c \n\n\t",'!');
}
//_!_!_!_!_!_!_!_!_!_
/*
AUTHER NAME: <~|《《《Š.Â.Ď》》》|~>

PURPOSE: PRACTICE

DATE: 14/01/2021

[ MAKAR SANKRANTI SPECIAL'S.]

PROGRAM NAME: functions with arguments and without return value.
*/
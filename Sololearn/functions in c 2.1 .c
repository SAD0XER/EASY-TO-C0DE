#define p printf
#include <stdio.h>
#define sAd_is_a_normal_guy "YES! YOU ARE RIGHT.."
// this statement for only experiment. 


// TYPE 2.A FUNCTIONS
/*
 Declaration of function is on the head of main() function.
*/
void print_box(int x) //declaration of function
{
for(int z=0; z<=x;z++)
p("%c \n\n\t",'!');
} // body of function.

float main()
{
    float Y=10;
    p("the value of Y is : %f\n\n\n\t\t%s\t",Y,sAd_is_a_normal_guy);
    
    print_box(10);
    
    return 0;
}
//_!_!_!_!_!_!_!_!_!_
/*
AUTHER NAME: <~|《《《Š.Â.Ď》》》|~>

PURPOSE: PRACTICE

DATE: 14/01/2021

[ MAKAR SANKRANTI SPECIAL'S.]

PROGRAM NAME: functions with arguments and without return value.
*/
// thanks kashyap kumar. :)
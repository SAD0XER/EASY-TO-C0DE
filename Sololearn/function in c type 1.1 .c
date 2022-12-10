/*
AUTHER NAME: <~|《《《Š.Â.Ď》》》|~>

PURPOSE: PRACTICE

DATE: 14/01/2021

[ MAKAR SANKRANTI SPECIAL'S.]

PROGRAM NAME:function/ with arguments and with return value.c 
*/

#define p printf
#include <stdio.h>

// TYPE 1.A: FUNCTION
/* 
in type, we declare the working of functions after the writing a functions. */ 
//*+*+*+*+*+*+*+*+*+*+
float tron(float f_1  , float f_2)
{
return (f_1 * f_2);
}
int main() 
{
float ANSWER,f_1,f_2;

scanf("%f%f",&f_1,&f_2);
//^_^_^_^_^_^_^^_^_^_^
ANSWER = tron(f_1,f_2);
// formula
//^_^^_^_^_^__^_^_^_^_
p("\n\n||\t\tPRODUCT OF \'float\' IS: %.2f\t\t||",ANSWER);

    return 0;
}

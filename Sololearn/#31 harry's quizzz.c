/*
PROGRAM purpose: practice.
*****************************************
CREDITS:
#1 youtube channel- CodeWithHarry.
#2 sad
*****************************************
NOTE: when you give any input , enter only two numbers.
*****************************************
*/

#include <stdio.h>
#define p printf

/* Declaration of function. */
void addsub(int* a , int* b);

int main()
{
int add, sub;

p("___<!PROGRAM TO DO ADD TWO NUMBER AND SUBSTRACT FROM THAT SUM.!>___\n\n\n\nEnter two Numbers:\n");
scanf("%d %d",&add,&sub);

p("\nNow the value of the add and sub is %d & %d .\n",add,sub);

p("\nBut now the value of add and sub is:");

/* Function call and give reference */
addsub(&add,&sub);
    return 0;
}


/* Function Definition */
void addsub(int* a , int* b)
{
int a1,b1;
    
    a1 = *a + *b;
    b1 = *a - *b;
    
    p(" \t add = %d and sub = %d",a1,b1);
}
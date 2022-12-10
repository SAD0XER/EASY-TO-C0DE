// edited on 26/09/2022 - Real file Name: TAble from do-while loop .c
/*
PURPOSE OF CODE: practice only.

AUTHOR NAME: SAD.

#define p printf
DATE: 10 / 1 / 2021

PROGRAM NAME: tables using do-while loop.
*/

#define p printf
#include <stdio.h>
#define d do
#define wle while

int main() {
int z,y,x;
// DECLARATION
y = 0;


scanf("%d",&x); //take input from user.

p("\"helloooo!\nmy brother and sistors..\"\n\n\n");
p("YOUR TABLE ARE.\n");
d {

z = y*x;//just normal formula.

p("%d\n",z);

y++; // increment.

p("___\n");// this is for something decorative.    

}//end of do.

wle(y<=10); // condition.

/* in the do-while loop
don't forgot to give semicolon (;) after the while condition
;
*/
    return 0;
}
/* guys! don't forgot to like.
because, your one like  will inspire me.
*/
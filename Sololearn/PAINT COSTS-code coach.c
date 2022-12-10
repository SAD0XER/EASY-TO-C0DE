#include <stdio.h>
#include <math.h>

int main() {
/*
<<EXPLINATION IS HERE>>

canvas and brushes are 40.00
each color is equal to 5.00
tax formula is tax=(40 / color) * 100
*/
int c;

scanf("%d",&c);

c = (c*5.)+40.;
c = c + round(c*10./100);
printf ("%d",c);
 
    return 0;
}

// CREDIT GOES TO 98 SLayer Roczz...
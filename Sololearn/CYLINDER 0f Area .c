#include <stdio.h>  

// GEOMETRICAL FORM

// ==CYLINDER==

// Cylinder (radius r, height h)

    int main() {

    const double PI = 3.14285;
    float r;

    float h;
// First value will be your Radius.

// Second value will be your Height.

    printf   ("<<Enter the value>>\n\n");
    
    scanf ("%f\n",&r);
    scanf   ("%f\n",&h);
    
    
    printf ("Radius = %5.2f\n",r);
    printf ("Height = %5.2f\n",h);


/*==:==:==:==:==:==:==:==:==:==:==:==:==:==:==:==:=:==*/
    
    float C = 2 * PI * (h  + r);
    
    
    printf   ("\n\nArea 0f Cylinder = %4.2f",C);
    
    return 0;    
}
/*Any suggetion for me ...?
then tell me..
 thanks for giving youe most valuable time.*/
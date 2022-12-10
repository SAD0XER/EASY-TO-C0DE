#include <stdio.h>
//____________________________________
// This program for find The area of a circle.
//____________________________________
int main() {

 {   float rad;
    const double PI = 3.142;
    
    printf ("Enter the radius.\n");
 // you can enter integer and  float value.   
    scanf ("%f\n",&rad);
    printf ("Given Radius is:%5.2f\n",rad );
    
/*<><><><><><><><><><><><><><><><><><>*/    
    float radius = rad * rad;
    
 // area of circle = πr²
 
    float C = PI * radius;
    
    printf ("\n\nArea of a CIRCLE =%5.2f units.\n",C);}

    return 0;
}
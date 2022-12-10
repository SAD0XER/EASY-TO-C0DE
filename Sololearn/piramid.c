/*
#include <stdio.h>
#define p printf
#define s scanf
//     let's make the pyramid......
int main() {

int a,b,c,d;

p ("ENTER NUMBER FOR PYRAMID:_\n");
s ("%d",&a);
d=a;
for (b=1;b<=a;b++)
{
for (c=1;c<d;c++)
{
    p (" ");
    a--;
}
for (c=1;c<=2*a-1;c++)
{
    p ("*");
    p ("\n");
}
}   
    return 0;
}

*/

//<><><><><><><><><><><><><><><><><><><><><><><><><><><><>

#include <stdio.h>

int main()
{

    int row, c, n, temp;

    printf("Enter the number of rows in pyramid of stars you wish to see \n\n");
    scanf("%d", &n);

    temp = n;

    for (row = 1; row <= n; row++)
    {

        for (c = 1; c < temp; c++)
        printf ("    ");
        printf (" ");

        temp--;

        for (c = 1; c <= 2 * row - 1; c++)
            printf("*");

        printf("\n");

    }

    return 0;
}

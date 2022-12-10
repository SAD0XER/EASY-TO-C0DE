// edit on: 30/10/2022-Real File Name: float operation.
#include <stdio.h>

int main() {
float f = 0.1f;
if (f == 0.1f)
printf ("e");
else
printf ("not e");

printf("%.20f\n",f);
//printf("%.20f\n",0.1);
/*
Here you decleared one float variable f and you assigning value 0.1 remember that this is double value not float becz by default float value treat as double type but here f type is float and you assigning double value to float variable f  .  If you type cast lower data type to higher like 
Short to int ,int to float , float to double. but in case of double to float it means here u typecasting double value to float variable . Both data types have different different ranges so if u will try to assign value it will loose some precision and your data will be loose . If you avoid this kind of problems in your code in  c++ you can use 
static_cast<data type>

same this thing happening in your case.  
If u want to define float variable then you can write like this
float f=0.1f ;
if didn't get answer then try this one your doubts will be clear

0.1is a double value by default
when assigned to float it will loose some precision hence it will not compare equal to 0.1
printf("%.20f\n", a);
printf("%.20f\n",0.1);
    return 0;
}
*/
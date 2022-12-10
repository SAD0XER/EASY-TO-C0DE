#include <stdio.h>
//header files 
int main(){

	int integer;
scanf("%d",&integer);


	char chr; //char store only single character.
scanf ("%c",&chr);


	double dbl; // double store also float value but size is double .
scanf ("%lf",&dbl);


	long lng; //for long int write only long.
	scanf ("%ld",&lng);


	printf("integer =  %d\n",integer);


printf("\nchar = %c\n",chr);


	printf("\ndouble = %lf\n",dbl); // format specifire of long int is %lf (long float).



	printf("\nlong = %ld\n",lng);
// format specifire of long int is %ld(long decimal).
}
/*
THIS IS A DEBUGGING CONTEST QUESTION (SOLVED).
NAME OF THE PROGRAMMER IS "PARAC0DER".
DATED ON "14/08/2021".
TIME REQUIRE FOR THIS QUESTION IS "10.00m"
*/
#include <stdio.h>

int main()
{
int i,n;

double arr[100];
printf("How many numbers you wants to test \?");
scanf("%d", &n);

printf("Enter the number of elements(1 to 100):\n");
for (i = 0; i < n; i++)
{
printf("Enter number %d: \n", i+1);
scanf("%lf",&arr[i]);
}// End of the loop & end of the input.

for(i=1;i<n; i++)
{
    if(arr[0] < arr[i])
    arr[0] = arr[i];
}// End of the loop ; checking an condition.

printf("Largest Elements = %lf",arr[0]);

return 0;
}

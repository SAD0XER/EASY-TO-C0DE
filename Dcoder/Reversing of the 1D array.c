  #include <stdio.h>
int main(){
  printf ("\t\t======PROGRAM TO SWAP THE ARRAY======\n\n");
  int a[7] = {23,45,7,4,35,3,6};
  // before swaping.
  printf ("Before swaping the array.\n");
  for (int i=0; i<7; i++){
  printf ("%d\t",a[i]);
  } // end of the loop.
  
  //swaping process.
  int j,i;
  for (i=0; j=6; i<j; i++; j--){
    int t = a[i];
    a[i]=a[j];
    a[j]=t;
  }
  
  // after the swaping.
  printf ("\n\n\t\t\t======AFTER THE SWAPING======\n\n");
  for (int i = 0; i<7; i++){
    printf ("%d\t",a[i]);
  } // end of the loop.
  
  return 0;
}

/*
  #include<stdio.h>
//#define printf p
int main()
{
 int a[] = {1,2,3,4,5};
  //printed("%d", a[-1]);
  int i;
 int j = i - 1;
  i = 0;
 while (i < j)
 {
   int t = a[i];
   a[i] = a[j];
   a[j] = t;
   i++;
   j--;
 }
 
 for (int i = 0; i < 5; i++)
 {
   printf ("%d\n",a[i]);
 }
return 0;  
}
*/

/*
#include<stdio.h>

void main()
{
int arr[30], i, j, num, temp;

printf("\nEnter no of elements : ");
scanf( "%d", &num);
//Read elements in an array
printf("Enter the elements of the array:");
for(i = 0; i<num; i++)
{
scanf("%d", &arr[i]);
}
j = i - 1; // j will Point to last Element
i = 0; // i will be pointing to first element
while (i < j)
{
temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
i++; // increment i
j--; // decrement j
}
//Print out the Result of Insertion
printf("\nResult after reversal : ");
for (i = 0; i < num; i++) {
printf("%d \t", arr[i]);
}

}
*/
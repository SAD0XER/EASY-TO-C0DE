/* #30DAYS30CODE CHALLENGE

PROGRAM NAME: PROGRAM TO IMPLEMRNT AND DOING INSERTING AND SEARCHING OPERATION IN THE ARRAY.

GIVE INPUT:
5
11
22
33
44
55
99

EXPLAINATION:
1) 5 Represents; 5 numbers you wants to enter in the array
2) 11,22..55 these are the elements thats you want to enter in the array.
3) which elements do you want to search in the array ? that is 99.
*/
#include <stdio.h>

int main()
{
  int tsize, arr[50]; // variable declaration.
  
  printf ("SUBJECT: DATASTRUCTURE AND ALGORITHEM.\nPROGRAM: PROGRAM TO IMPLEMRNT AND DOING SEARCHING OPERATION IN ARRAY.\n+=======================================================================+\n\n\n");
  printf ("How many elements do you wants to enter in the array \?\'MAX SIZE OF ARRAY IS 100\'\nANS:\t");
  scanf ("%d",&tsize);
 
 // Inserting elements in the arrayy....
 for (int i = 0; i < tsize; i++) 
 {
   printf ("\nEnter the elements in array for the Index %d:",i);
   scanf ("%d",&arr[i]);
 
 }//END OF THE FOR LOOP.
 
 
 //Display array elements.
 printf ("\nAfter inserting elements in the array is :\n");
 
 for (int i = 0; i < tsize; i++)
 {
   printf ("\n At the %d position element is: %d",i+1,arr[i]);
 
 }// end of the loop.
 
 //Searching the element in the array .
 int tmp;
 printf ("\n\nWhich element do you want to search in the array \?\nANS: ");
 scanf ("%d",&tmp);
 
 for (int i=0; i < tsize; i++)
 {
   if (tmp == arr[i])
   {
     printf ("\nYes.! %d Found in the Array.",tmp);
     break;
   
   }//end of the "if condition"
    
    printf ("\nNo! %d Not Found in the Array.",tmp);
    break;
 
 }// end of for loop.

 
}//END OF THE CODE.
// tell me what is wrong...please

#include  <stdio.h>
//Compiler version gcc  6.3.0
int main()
{
 
 
    //  declaration 
    int a;
    int array1[5];
    int array2[5];
    int pro[5];


  // process 1
    printf("ENTER NUMBER IN ARRAY 1 \n");
  
    for (a=0; a<10; a++)
    {
      scanf("\n%d",&array1[a]);
    }


      // procees 2
    printf("ENTER NUMBER IN ARRAY 2 \n");

    for (a=0; a<10; a++)
      {
        scanf("\n%d",&array2[a]);
      }


      // process of pr0d
      printf("product of array.\n");

      for (a=0; a<10; a++)
      {
        pro[a] = array1[a] * array2[a];
      }
      printf ("%d",pro[a]);
}

//    PLEASE TELL ME WHAT IS WRONG IN THIS CODE . PLEASE.
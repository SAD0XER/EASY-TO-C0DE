#include <stdio.h>
#include <string.h>

int main()
{
    char str[100],a[1];
    
    fgets (str,100,stdin);
    
    int size, c = 1;
    size = strlen(str);
    
    
    a[size] = str[size];
    
    for (int i=0; i < size; i++)
    {
        for (int j = size-i; j > 0; j--)
        {
            if (a[i] == str[j+c])
            {
                printf ("Deja Vu");
                
                exit(0);
                
                } // end of "if"
            
            c++;
        
        } //end of loop 2.
    } //end loop 1.
    printf ("Unique");
    
    return 0;
}



/*
#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int N;//N= how many number you wants to store in array
  
  printf("How many elemrnts you wants to store in array: ");
  scanf("%d",&N);
  int arr[N];//size if the array is N  
  
  printf("Enter the %d elements in the array:\n",N);
  for (int i = 0;i<N;i++)//for loop for inserting elements in array
  scanf ("%d",&arr[i]);
  
  for (int i = 0;i<N;i++)//for loop for displaying elements in array
  printf("%d\t",arr[i]);       
  
  return 0;
  }
  */
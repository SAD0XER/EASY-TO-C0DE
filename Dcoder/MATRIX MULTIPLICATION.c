//Compiler version gcc  6.3.0

// THIS PROGRAM TO FIND MATRIX MULTIPLICATION.
 #include <stdio.h>
 
 int main()
 {
  int a, b, c, d, i, j, k, sum = 0;
  
  printf ("ENTER THE n OF ROWS OF THE FIRST MATRIX :");
  scanf ("%d", &a);
  printf ("\nENTER THE n OF COLUMNS OF THE FIRST MATRIX :");
  scanf ("%d", &b);
  printf ("\nENTER THE n OF ROWS OF THE SECOND MATRIX :");
  scanf ("%d", &c);
  printf ("\nENTER THE n OF COLUMNS OF THE SECOND MATRIX :"); 
  scanf ("%d", &d);
  
  if (b == c)
  {
    printf ("\n==========THIS IS THE VALID MATRIX FOR THE MULTIPLICATION.==========\n\n\n");
  }
  else
  {
    printf ("\n\n=|=|=|=-THIS IS NOT A VALID MATRIX FOR THE MULTIPLICATION.");
    return (0);
  }
 
  int A[a][b], B[c][d], C[i][j]; // declaring the matrix.

// Adding values into the matrix A.  
   printf ("ENTER THE VALUES INSIDE THE MATRIX A.\n");

 for (i = 0; i < a; i++)
   {
     for (j = 0; j < b; j++)
       {
//       printf ("ENTER THE VALUE FOR THE POSITION A[i][j] = ", i, j);
       scanf ("%d\t", &A[i][j]);
  //     printf ("\t");
       }
     printf ("\n");
   }
   
 // Adding values into the matrix B.
   printf ("ENTER THE VALUES INSIDE THE MATRIX B.\n");
 for (i = 0; i < c; i++)
   {
     for (j = 0; j < d; j++)
       {
//       printf ("ENTER THE VALUE FOR THE POSITION B[i][j] = ", i, j);
       scanf ("%d\t", &B[i][j]);
//       printf ("\t");
       }
     printf ("\n"     );
   }
  
    
// MULTIPLYING THE BOTH MATRIX.
  for (i = 0; i < b; i++)
    {
      for (j = 0; j < c; j++)
        {
          for (k=0; k<i; k++)
            {
               sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
            sum = 0;
        }
    }
    
    //Print the resultant matrix
    for (int i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            // Print the result
            printf("%d \t", C[i][j]);
        }
        printf("\n");
    }
   
   return 0;
 }
 
/*
=========================================
   #include <stdio.h>
//#include <stdlib.h>
int main()
{
    int m, n, sum = 0;
    int a[3][4], b[4][2],result[3][2];
    printf("Enter the first matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // printf("Enter the %d %d element of first matrix\n", i, j);
            scanf("%d", &a[i][j]);
            // printf("\t");
        }
        // printf("\n");
    }
    printf("Enter the second matrix\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            // printf("Enter the %d %d element of first matrix\n", i, j);
            scanf("%d", &b[i][j]);
            // printf("\t");
        }
        // printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            // Calculate the result
            for (int k = 0; k < 4; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }

    //Print the resultant matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            // Print the result
            printf("%d \t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
=========================================
  
  
*/
  
  
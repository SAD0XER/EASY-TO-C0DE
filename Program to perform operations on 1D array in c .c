//1A. Write a program to store the elements in 1-D array and perform the operations likesearching, sorting
//and reversing the elements. [Menu Driven]

#include<stdio.h>
#include<conio.h>
int main()
{
  int a[100], n, i, I, j, x, ele, choise, flag=0;
  clrscr();
  printf("Program to store the elements in 1-D array and \nperform the operations like searching, sorting and \nreversing the elements.\n\n\nEnter the size of the array\t");
  scanf("%d",&n);
  printf("\nEnter the elements of the array: ");
  for(i=0;i<n;i++)
  {
    printf ("a[%d]=",i+1);
    scanf("%d",&a[i]);
  }
  
  do
  {
    clrscr();
    printf("Operatons:\n1-Searching\n2-Sorting\n3-Exit the array from elements.\n");
    printf("\nEnter your choice:\t");
    scanf("%d",&choise);
    
    switch(choise)
    {
      case 1:
        printf("\nEnter the element to be searched\t");
        scanf("%d",&ele);
        for(i=0;i<n;i++)
        {
          if(a[i]==ele)
          {
            x=i;
            flag=1;
            break;
          }
        }
        if(flag==0)
        {
          printf("\nElement not found!");
        }
        else
        {
          printf("\nElement found at position %d",x+1);
          flag=0;
        }
        getch();
        break;
        
      case 2:
        for(i=0;i<n;i++)
        {
          for(j=0;j<n-1;j++)
          {
            if(a[j]>a[j+1])
            {
              x=a[j];
              a[j]=a[j+1];
              a[j+1]=x;
            }
          }
        }
        printf("\nAfter sorting:\n");
        for(i=0;i<n;i++)
        {
          printf("%d\t",a[i]);
        }
        getch();
        break;
        
            case 3:
        exit(0);
        break;
        
      default:
        printf("\nINVALID INPUT!");
      }//End of switch case.
      
  } while (choise != 3);
  getch();
  return 0;
}

//===============================================

/*
// i have to understand this case.
    case 3:
        x=n/2;
        j=n-1;
        for(i=0;i<x;i++)
        {
          ele=a[i];
          a[i]=a[j];
          a[j]=ele;
          j--;
        }
        printf("\nReversed array is\n");
        for(i=0;i<n;i++)
        {
          printf("%d\t",a[i]);
        }
        getch();
        break;
        */
//==============================================

/*  
//1A. Write a program to store the elements in 1-D array and perform the operations likesearching, sorting
//and reversing the elements. [Menu Driven]

#include<stdio.h>
#include<conio.h>
int main()
{
  int a[100],n,i,I,j,x,ele,ch,flag=0;
  clrscr();
  printf("\nEnter the size of the array\t");
  scanf("%d",&n);
  printf("\nEnter the elements of the array:\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  do
  {
    clrscr();
    printf("\n1-Searching\n2-Sorting the array\n3-Reverse the elements\n4-Exit");
    printf("\nEnter your choice\t");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
        printf("\nEnter the element to be searched\t");
        scanf("%d",&ele);
        for(i=0;i<n;i++)
        {
          if(a[i]==ele)
          {
            x=I;
            flag=1;
            break;
          }
        }
        if(flag==0)
        {
          printf("\nElement not found!");
        }
        else
        {
          printf("\nElement found at position %d",x+1);
          flag=0;
        }
        getch();
        break;
      case 2:
        for(i=0;i<n;i++)
        {
          for(j=0;j<n-1;j++)
          {
            if(a[j]>a[j+1])
            {
              x=a[j];
              a[j]=a[j+1];
              a[j+1]=x;
            }
          }
        }
        printf("\nAfter sorting\n");
        for(i=0;i<n;i++)
        {
          printf("%d\t",a[i]);
        }
        getch();
        break;
      case 3:
        x=n/2;
        j=n-1;
        for(i=0;i<x;i++)
        {
          ele=a[i];
          a[i]=a[j];
          a[j]=ele;
          j--;
        }
        printf("\nReversed array is\n");
        for(i=0;i<n;i++)
        {
          printf("%d\t",a[i]);
        }
        getch();
        break;
      case 4:
        exit(0);
        break;
      default:
        printf("\nINVALID INPUT!");
      }
  }while(ch!=4);
  getch();
  return 0;
}
*/

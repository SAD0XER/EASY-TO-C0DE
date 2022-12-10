/*
#30DAYS30CODE
#DAY08

PROGRAM NAME: Write a program to store the elements in 1-D array and perform the operations like searching, sorting and reversing the elements. [Menu Driven]

DATE: 15\10\2021

PROGRAMMER: PARAC0DER

*/

#include <stdio.h>

int main()
{
    int a[100], n, i, I, j, x, ele, choise, flag = 0;

    printf("Program to store the elements in 1-D array and \nperform the operations like searching, sorting and \nreversing the elements.\n\n\nEnter the size of the array\t");
    scanf("%d", &n);

    printf("\nEnter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        printf("a[%d]=", i + 1);
        scanf("%d", &a[i]);
    }

    do
    {
        printf("Operatons:\n1-Searching\n2-Sorting\n3-Exit the array from elements.\n");
        printf("\nEnter your choice:\t");
        scanf("%d", &choise);

        switch (choise)
        {
        case 1:
            printf("\nEnter the element to be searched\t");
            scanf("%d", &ele);
            for (i = 0; i < n; i++)
            {
                if (a[i] == ele)
                {
                    x = i;
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                printf("\nElement not found!");
            }
            else
            {
                printf("\nElement found at position %d", x + 1);
                flag = 0;
            }

            break;

        case 2:
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < n - 1; j++)
                {
                    if (a[j] > a[j + 1])
                    {
                        x = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = x;
                    }
                }
            }
            printf("\nAfter sorting:\n");
            for (i = 0; i < n; i++)
            {
                printf("%d\t", a[i]);
            }

            break;

        case 3:
            exit(0);
            break;

        default:
            printf("\nINVALID INPUT!");
        } // End of switch case.

    } while (choise != 3);

    return 0;
}

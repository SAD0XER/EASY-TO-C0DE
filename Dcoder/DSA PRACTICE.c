// #30DAYS30CODE CHALLENGE
// PROGRAM TO IMPLEMRNT AND DOING SEARCHING OPERATION IN ARRAY.
#include <stdio.h>

void main()
{
    int tsize, arr[50]; // variable declaration.
    printf("SUBJECT: DATASTRUCTURE AND ALGORITHEM.\nPROGRAM: PROGRAM TO IMPLEMRNT AND DOING SEARCHING OPERATION IN ARRAY.\n+=======================================================================+\n\n\n");
    printf("How many elements do you wants to enter in the array \?\(MAX SIZE OF ARRAY IS 100\)\nANS:\t");
    scanf("%d", &tsize);

    // Inserting elements in the arrayy....
    for (int i = 0; i < tsize; i++)
    {
        printf("\nEnter the elements in array for the Index %d:", i);
        scanf("%d", &arr[i]);
    } // END OF THE FOR LOOP.

    // Display array elements.
    printf("\nAfter inserting elements in the array is :\n");
    for (int i = 0; i < tsize; i++)
    {
        printf("\n At the %d position element is: %d", i + 1, arr[i]);
    } // end of the loop.

    // Searching the element in the array .
    int tmp;
    printf("\n\nWhich element do you want to search in the array \?\nANS: ");
    scanf("%d", &tmp);

    for (int i = 0; i < tsize; i++)
    {
        if (tmp == arr[i])
        {
            printf("\nYes\! %d Found in the Array.😄", tmp);
            break;
        } // end of the "if condition"
    }     // end of for loop.

    printf("\nNo! %d Not Found in the Array.☹️", tmp);

} // END OF THE CODE.

#include <stdio.h>

void main()
{
    char AL;
    int flag = 0;

    printf("ENTER THE ALPHABET.");

    scanf("%c", &AL);

    printf("\n\nYOU ENTERED: %c.", AL);

    if (AL == 'a' || AL == 'A' || AL == 'E' || AL == 'e' || AL == 'I' || AL == 'i' || AL == 'O' || AL == 'o' || AL == 'u' || AL == 'U')

    {
        flag = 1;
    }

    if (flag == 1)

    {
        printf("\n\n\nand it is a VOWELS.");
    }

    else

    {
        printf("\nand it is a constant. ");
    }
}

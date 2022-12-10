// Created by 🍂B. Eitan 🌵

/* Author: B. Eitan */

#include <stdio.h>

int main()
{
    int i, j, k;
    int max = 12; /* Fill free to change this */

    for (i = 0; i < max; i += 1)
    {
        for (j = 0; j < max - i; j++)
            printf(" ");
        for (k = 1; k < i * 2; k += 1)
            printf("*");
        printf("\n");
    }
    printf("*Don't forget to UpVote");
    return 0;
}

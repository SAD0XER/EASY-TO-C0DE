// Created by 💕₽ΔŘI💕

#include <stdio.h>

/*credit:-Inspired from cllg notes */
 

int main()
{
    int Y = 15;
        int Z = 1;
        for (int P = 1; P <= Y; P++) {
            for (int K = 1; K <= Y; K++) {
                if (K <= Z || K >= Y - Z + 1)
                    printf("%2c", '|');
                else
                    printf("%2c", ' ');
            }
            if (P <= Y / 2)
                Z++;
            else
                Z--;
            printf("\n");
        }
    return 0;
}
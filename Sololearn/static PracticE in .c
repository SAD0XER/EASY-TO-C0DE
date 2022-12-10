// Created by 👑 Tchybooxuur!

#include <stdio.h>

void greetings();

int main() {    
    int j;

    for (j = 1; j < 6; j++) {
        greetings();
    }
   
    return 0;
}

void greetings() {
    static int calls = 1;

    printf("Hello 👑Tchybooxuur!. Welcometo C language %d\n", calls);
    calls++;
}

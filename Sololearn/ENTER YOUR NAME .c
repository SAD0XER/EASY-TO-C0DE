

#include <stdio.h>
/* GIVE THE INPUT AS LIKE --SAD DAS ASD

I MEAN ENTER YOUR FULL NAME BY GIVING THE SPACE*/

int main() {

char fn[20],mn[13],ln[30],name[100];


scanf ("%s",&fn);
printf ("YOUR FIRST NAME: %s\n",fn);



scanf ("%s",&mn);
printf ("YOUR MIDLE NAME: %s\n",mn);



scanf ("%s",&ln);
printf ("YOUR SURNAME:%s\n\n\n",ln);



printf ("YOUR FULL NAME: %s %s %s",fn,mn,ln);


    return 0;
    
}
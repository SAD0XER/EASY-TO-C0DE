/*
AUTHER NAME: <~|《《《Š.Â.Ď》》》|~>
PURPOSE: PRACTICE + UNDERSTAND
DATE: 17/01/2021    
PROGRAM NAME: functions type 3 :- without arguments & with return value
*/

//====================//


#include <string.h>
#define p printf  
#include <stdio.h>

// TYPE 3.B Functions
/* in this type of functions return type is present but arguments are absent.
*/

char MY_NAME_Length();
// only declaration of function. just name.


int main()
{
MY_NAME_Length();
// function calling
    return 0;
}

/* functions, we can write on top of the code 
otherwise last buttom of the code.
*/
char MY_NAME_Length()
{
char nam[786];
p("MY NAME IS:\t");
fgets(nam,786,stdin);
fputs(nam,stdout);
p("\n\tSTRING LENGTH IS %ld units.\n",strlen(nam));
return *nam; // return type / must
}

// DON'T FORGET TO UPVOTE . I WANT 5++ UPVOTE..
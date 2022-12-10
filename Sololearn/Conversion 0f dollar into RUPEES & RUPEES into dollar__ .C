#include <stdio.h>

//....COMMENT MUST READ PLEASE FOR BETTER UNDERSTANDING...

// First thing is, this program is in a #SOLOLEARN conpiler.

// Second is, so, in this compiler  you can give input ONLY ONE TIME.

// third is, so, you have to give all input in  first attempt.

// forth is, give input like example., 1 (white space) (your value) THEN  click on SUBMIT BUTTON.

int main() 
{

float dollar = 76.35;

float rupees, dol,doll;

printf ("choose any one option:\n1: Dollar coverted into rupees.\n2: Rupees coverted into dollar.");

int option;

scanf ("%d",&option);

//______________________________________
if (option == 1) 

{// 1: dollar converted into RUPEES.

    printf ("\n\t Enter rupee:");
    scanf ("%f",&rupees);
    printf ("\n your dollar is:%f",rupees);
    dol = rupees * dollar ;
    printf ("\n your rupees is:%f",dol);
}

//_____________________________________


else 

{// 2: RUPEES converted into dollar.
    printf ("\n\n Enter rupees:");
    scanf ("%f",&rupees );
    printf ("\nyour rupees is:%f",rupees);
    doll = rupees / dollar ;
    printf ("\nyour dollar is:%f",doll);
}

//______________________________________

 return 0;
}

// most importan thing is...
/* THIS IS MY FIST LONG CODE.
SO, if anything wrong in this code ! ? ... 
then tell me please.
and also any suggetion for me that also tell me.
*/ 

// THANK YOU.
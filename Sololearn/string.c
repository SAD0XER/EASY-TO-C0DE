/*
                   JAY HIND !
*/
#include <stdio.h>
#include <string.h>
// #define p printf
/*
in the string , fgets fuction gets input contineously untill you press enter button.
first, enter your name then press enter. 
second, enter your rollno then press enter. 
third, enter your standard.
(NOTE: YOU CAN ENTER ALPHANUMERIC CHARACTER.)
*/
void main() 
//================================ = = = = = = = = = = = = = = =
char NAME[100],ROLLNO[13],STD[12];
//= = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
printf("\t\n\n What is your Name MAN ?\nANS:");
fgets(NAME,100,stdin);
fputs(NAME,stdout);
//= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =
printf("\t\n\n What is your ROLLNO br00 ?\n");
fgets(ROLLNO,13,stdin);
fputs(ROLLNO,stdout);
//= = = = = = = = = = = = = = = = = = = = = = = = 
printf("\t\n\n\nWhat is level(STD) ?\n");
fgets(STD,12,stdin);
fputs(STD,stdout);
//= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =
}
// #INDIAN AREMY KE NAAM.
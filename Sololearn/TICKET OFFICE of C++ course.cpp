/*
       ⚠️NOTICE⚠️
       If you solve learn cpp on SOLOLEARN   then you will solve this project named as TICKET OFFICE.
---------------------- If you read the whole program discription then you will know WHAT IS THE CONCEPT OF  THE PROGRAM.
----------------------
      ☢️ DO ☢️
Enter your five number first.
Then see what will be the answer..
----------------------
     ☣️DO NOT☣️
DON'T ENTER YOUR NAME AND OTHER THING.

[ ENTER ONLY POSOTIVE INTEGER NUMBER ]     
*/

#include <iostream>

using namespace std;

int main() {

int i, ages[5];
float ans, final, s;
// s stands for small.

for (i = 0; i < 5; i++)/*This loop is used for taking input from user.*/
{
cin >> ages[i];
}

s=ages[0];
/*Array of first number is assigned to small (S) number.*/

for(i=1;i<5;i++)/*Again use "for loop" for checking.*/
{
if(ages[i]<s)/* "if statment" used for checking entered number is small or not.*/
{
s=ages[i];/* small value assign to 's' variable; when "if" condition is true. */
}// end of "if" statment.
}// end of "finding smallest number loop"

percentage = (s*50)/100;/* here we find the percentage (discount) of overall 50 dollar */

discount = 50 - percentage;/*and here we finded discount substracted from total amount of ticket group.  */

cout << "The Youngest person of AGE is "<<(float)s<<\n"Discount of Ticket group is "<<final;/*here is showing final answer.*/

    return 0;
}
/*AUTHER: SAD
PROGRAM NAME: TICKET OFFICE
DATE: 02/05/2021
CREDIT: https://codedost.com
*/
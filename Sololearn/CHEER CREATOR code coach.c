/*
PROGRAM NAME: CHEER CREATOR (FROM CODE  COACH WITH AMSWER)
DATE: 12/03/2021
TIME:18.00
*/
#include <stdio.h>

int main()
{
int IP;/*IP=>input*/
scanf("%d",&IP);

if (IP<=0)/*here condition is IF YOUR INPUT VALUE ZERO OR LESS THAN ZERO (NEGATIVE VALUE) THEN PRINT "shh" .*/
printf ("shh");

else if (IP<=10 && IP>0)/*here condition is ELSE-IF YOUR INPUT VALUE IS GREATER THAN ZERO AND(&&) LESS THAN EQUAL TO TEN THEN CORSOR GO INSIDE THE LOOP. */
{
   for(int i=1; i<=IP; i++)/*AND THE LOOP SET FOR THE TEN TIME ROTATING. SO EVERY TIME LOOP ROTATE AND PRINT "Ra!" UNTIL THE LAST CONDITION GETTINGS FALLS. */
   {
   printf("Ra!");
   }//end of loop.
}//end of if statement.

else if (IP>10)/* again  here appling ELSE-IF STATEMENT AND the condition is INPUT VALUE IS GREATER THAN "ten" THEN IT WILL PRINT "High Five". */
printf("High Five");
    return 0;
}//end program

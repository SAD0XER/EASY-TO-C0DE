/*
PROGRAM NAME: TRANSPORTATION (FROM CODE COACH WITH S0LUTION)

PURPOSE: PROGRAM TO FIND 'how many seat's are remaining in the bus'.

MY NAME: SAD

DATE: 2021\07\03

TIME: 11.30
*/
#include <iostream>
using namespace std;
#define c cout
/*
BC: bus capacity
RS: reamaining seat's
LB: last bus
IP: input / passenger
*/
int main()
{
int RS,LB,IP,BC=50;
//c<<"Enter the Number of passangers on station:"<<endl;
cin>>IP;

if(IP<=BC)
{
    RS = BC - IP;
    c<<"________THe remaining seat's in last bus is\t"<<RS<<".________";
}
else

{
   LB = IP % BC; /*
   Module operator use for to 'find how many people's are remaining for the last bus' Thats store in (LB). */
   c<<"For the last bus only\t"<<LB<<"\t passenger reamaining.\n\n";
   
   RS = BC - LB;  /*
   After the finding people's for the last bus, Then ninus that number of people's (LB) from actual capacity of the bus. */
   c<<"_________THe remaining seat's in last bus is\t"<<RS<<".__________";
}

    return 0;
}
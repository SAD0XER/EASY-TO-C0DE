#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
   int dd,dr,re;
   float qu;
   
   cout << "Enter Your Dividend"<<endl;
   cin >> dd;
   cout << "Enter Your Divisor"<<endl;
   cin >> dr;
   
   qu = dd / dr;
   re = dd % dr;
   
   cout << "Your Quotient is: "<<(float)qu <<endl;
   cout << "Your Reminder is "<<re <<endl;
   
}
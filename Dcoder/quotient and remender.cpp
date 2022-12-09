#include <iostream>
using namespace std;
#define co cout
#define ci cin
//Compiler version g++ 6.3.0
//program to find quotient and remainder .
int main()
{
  co<<"-----Program to find Quotient and Remainder-----"<<endl<<endl;
  int N1, N2; 
  co<<"   Enter First number :";
  ci>>N1;
  co<<"   Enter Second number :";
  ci>>N2;
  co<<"\n Your Number Is:\t"<<N1<<"\t&\t"<<N2<<".\n";
  int Q = N1/N2;
  int R = N1%N2;
  co<<"\n Quotient is: "<<Q<<"\n     and\n The Remainder is :"<<R<<endl;
  return 0;
}
// edited on: 07/10/2022-Real File Name: palidrome.cpp
#include <iostream>
#define co cout
using namespace std;
//--------------------
class combo
{
   // private:
    
/*1)*/    void readnum(){
          int n;
          cin>>n;
    }// end readnum.
//.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.
    public:
    
/* 2) */    void factorial(){
       // readnum();
        int fact=1;
        int n;
        //cin>>n;
        readnum();
        for(int i=1;i<=n;i++){
            fact = fact * i;
            
        }// end loop.
        co<<" Factorial of "<<n<<"is "<<fact<<endl;
    }// end factorial.
    
/* 3) */    void ultanum(){
    //readnum();
    int rev = 0,remainder,n;
    co<<"Enter an integer:";
    cin>>n;
    while(n != 0){
    remainder = n % 10;
    rev = rev * 10 + remainder;
    n = n / 10;
    }
    co<<"\n\nReversed number ="<<rev<<endl;
}// end ultanum.
    
};// end class


//__________________________________________

int main()
{
    combo c1;
    co<<"WHICH OPERATION DO YOU WANT'S TO DO\?\nTHAT TYPE HERE:"<<"\n1. For reverse number.\n2. For Factorial of number"<<endl;
    int name;
    cin>>name;
    switch(name){
    case 1:
    {
    c1.ultanum();
    break;
    }
    case 2:
    {
    c1.factorial();
    break;
    }
    default:
    {
        co<<"\n\n\n Nahi reeee! \n wrong entry.!\n \t\t Firase try kR jara..!";
    }

}// end switch.

    return 0;
}// < समाप्त > धन्यवाद...!
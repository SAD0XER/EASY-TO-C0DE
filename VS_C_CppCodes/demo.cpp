/*
compile = g++ + file_name + tab
execute = a + tab

These commands for C++ Programs.
*/
#include<iostream>

using namespace std;
int main() 
{
    // char a; 
    
    // cout<<"Enter short form : ";
    // cin>>a;

    // if (a == 's')
    // {
    //     cout<< "sarvesh ashok devrukhakar";
    // }
    // else if (a == 'j')
    // {
    //     cout<< "jeevan gangaram pujari";
    // }
    // else
    // {
    //     cout<< "you are a noob";
    // }

int i,a, fact=1;
cout<<"Enter the Number: ";
cin>>a;

    while (i <= a){
        fact *= i;
        i++;
    }
    cout<<fact<<endl;

    return 0;
}
/*
AUTHOR NAME: #SAD0XER

*/

#include <iostream>
using namespace std;


int main() {

    int siblings, popsicles,s;
    cin>>siblings;

    cin>>popsicles;

    s = popsicles % siblings; 

if(s==0)
{
cout<<"give away";
}

else if(!(s==0))
{
cout<<"eat them yourself";
}
    
    return 0;
}
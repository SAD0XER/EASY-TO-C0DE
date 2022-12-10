#include <iostream>
using namespace std;

class Bankacc 
{
    public :
    int ACC_no;
    double balance;
    
    void show_details()
    {
        cout<<"My account Number is "<<ACC_no<<endl;
        cout<<"My account Balance is "<<balance;
    }
    
};

int main()
{
// creating object.
Bankacc sarvesh;
sarvesh.ACC_no = 988777654;

sarvesh.balance = 9404166251.00;
sarvesh.show_details();

    return 0;
}
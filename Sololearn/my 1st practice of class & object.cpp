/* this code is my first practice of class and objects.
*/

#include <iostream>
using namespace std;

class schooladmission
{
    public :
    
    int sum(int x=0,int y=0)
    {
        return (x+y);
    }
    
};

int main()
{
    
    schooladmission xbow;
    
    int a,b;
    
    cin>>a>>b;
    
    xbow.sum (a,b);
    
    cout <<"The addition of the given two number is "<< xbow.sum (a,b);
    
    return 0;
}
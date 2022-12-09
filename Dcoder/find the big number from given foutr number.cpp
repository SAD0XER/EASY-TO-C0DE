#include <iostream>
using namespace std;

//create function.
void find_big (int num1, int num2, int num3, int num4, int num5)
{
  int v = num1,w = num2,x = num3,y = num4,z = num5;
    if ( v > w )
    cout<<"the biggest number is",v;
    else if ( w > x )
    cout<<"the biggest number is",w;
    else if ( y > z )
    cout<<"the biggest number is",y;
    else
    cout<<"the biggest number is",z;
  
} // end of the function.

int main()
{

  find_big(2,4,5,6,7);
  int a = 43;
  cout<<"the number is",a;
  return 0;
  
}
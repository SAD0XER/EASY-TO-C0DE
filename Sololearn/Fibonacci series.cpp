/* wrote a program to give Fibonacci series in the output:
*/

#include <iostream>
using namespace std;

int main()
{
int a=0,b=1,sum=0;
cout<<a<<b;
while(sum<=20)
{
    sum=a+b;
    cout << sum<<endl;
    a=b;
    b=sum ;
}
    return 0;
}
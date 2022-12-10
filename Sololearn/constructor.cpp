#include <iostream>
using namespace std;
#define co cout
class XYZ
{
    private:
    char ch;
    int num;
    public:
    void getdata(char c,int n)
    {
        ch = c;
        num = n;
    }// end function
    friend class ABC;
};
class ABC
{
    public:
    void display(XYZ obj)
    {
         co<<obj.ch<<endl;
         co<<obj.num<<endl;
    }// end of function
};
int main()
{

    return 0;
}
/*

#include<iostream>
using namespace std;
int main()
{
float percent;
cout<<"Enter your percentage: ";cin>>percent;
try
{
if(percent<0 || percent>100)
throw(percent);
else
cout<<endl<<"Your percentage: "<<percent;
}catch(int p)
{
 cout<<endl<<"Invalid percentage: "<<p;
}
return 0;
}

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>

  #include<iostream>
using namespace std;

 class abc
 {
 int a,b,c;
 public:
void get()
{
cout<<"\nEnter three numbers: ";
cin>>a>>b>>c;
}
void show()
{
cout<<"\n\nA= "<<a<<",\t\tB="<<b<<"\tC= "<<c;
 {

 abc a1;
 a1.get();
 cout<<"\n\n Original contents";
 a1.show();
 -a1;
 cout<<"\n\n After Negation";
 a1.show();

 }
}
void operator -()
{
a= -a;
b= -b;
c= -c;
}
 };
 int main()
 {

 abc a1;
 a1.get();
 cout<<"\n\n Original contents";
 a1.show();
 -a1;
 cout<<"\n\n After Negation";
 a1.show();
 return 0;
 }


//>>>>>>>>>>><>>>>>>>>>>>>>>

#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

class Art
{

public:
  Art()
  {
     cout << "A' class" << endl;
  }
};
//......,............
class Base
{

public:

  Base()
  {
     cout << "B'class" << endl;
  }
}; // end of class



class Cat: public Base, public Art  // Note the order
{

public:

  Cat()
  {
    cout << "C's class" << endl;
  }
};

int main()
{ cout<<"this is a simple example of multiple inheritance\n";
    Cat c; //making a object of class

    return 0;
}

*/
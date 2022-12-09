/*
  Program to the overload binary assignment operator( += )
  to add two complex number.
  DATE: 13-02-2021
  */
#define co cout
#define ci cin
#include <iostream>
using namespace std;
//Compiler version g++ 6.3.0
class complex
{ int X,Y;
public:
  void Read ()
  { co<<"Enter the real and imaginary part of a complex number:\n";
  ci>>X>>Y;
  }//end read.
  
  void operator +=(complex c)/*make one object of class and pass in the function direcly.*/
  { X = X + c.X;
    Y = Y + c.Y;
    co<<endl<<"x="<<X<<endl<<"y="<<Y<<endl<<"Complex Number=";
  }//end Operator.
  
  void Display()
  { if (Y < 0)
  co<<X<<Y<<"i";
  else
  co<<X<<"+i"<<Y;
  }//end display.
      
};//end class.

int main ()
{ 
  co<<"__Real and Imaginary Number (Complex Number)__\n"<<endl<<endl;
  complex c0;
  complex c1;
  c0.Read();
  c1.Read();
  co<<"The last Real and Imaginary Number is:";
  c0+=c1;
  c0.Display();
  return 0;
}
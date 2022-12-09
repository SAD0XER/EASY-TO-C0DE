#include <iostream>
#define co cout
#define ci cin
using namespace std;
//Compiler version g++ 6.3.0
class circle 
{
  float r,a;
  public:
    float a1;
    circle(float x){
      r=x;
    }// end function.
    circle(circle &u){
      a1=u.a;
    }//end function.
    void compute();
    void display();
};//end class.
inline void circle::compute(){
  float r1= r*r;
  a = 3.14 * r1;
}//end definition.
inline void circle::display(){
  co<<"Area of circle = "<<a;
}//end definition.

int main()
{   float p;
    co<<"THIS PROGRAM FOR THE ..."<<"\n User define constructor."<<"\nPassing parameter.";
    co<<endl<<endl<<"Enter the Radius of the circle:";
    ci>>p;
    circle c(p);
    c.compute();
    c.display();
    circle c1(c);
   // co<<"Area Of Circle="<<c1.a1;
    return 0;
}
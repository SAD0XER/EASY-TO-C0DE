#include <iostream>
#define co cout
//#define ci cin
using namespace std;
//Compiler version g++ 6.3.0
class circle 
{
  float R,A;
  public:
  
    float A1;
    circle(float X){
      R=X;
    }// end function.
    
    circle(circle &U){
      A1=U.A;
    }//end function.
    
    void compute();
    void display();
};//end class.

inline void circle::compute(){
  float R1= R*R;
  A = 3.14 * R1;
}//end definition.

inline void circle::display(){
  co<<"Area of circle = "<<A;
}//end definition.

int main()
{   
    float P;
    co<<"THIS PROGRAM FOR THE ..."<<"\n User define constructor."<<"\nPassing parameter.";
        co<<endl<<endl<<"\nEnter the Radius of the circle:"<<endl;
    cin>>P;
    circle C(P);
    C.compute();
    C.display();
    circle C1(C);
    return 0;
}
// co<<"Area Of Circle="<<c1.a1;
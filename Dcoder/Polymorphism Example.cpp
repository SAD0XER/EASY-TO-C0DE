
#include<iostream>  
using namespace std;
/*================================================*/
class Base
{
  protected:
    int num1, num2;
    
    public:
    
      virtual void Read()
      {
        cout<<"1.o Enter two numbers:"<<endl;
        cin>>num1>>num2;
      } // end of read function.
      
      virtual void Display()
      {
        cout<<"Your two entered numbers are "<<num1<<"\t"<<num2<<endl<<endl;
      } // end of display function.
      
}; //end of base class.

class Sub: public Base
{
  protected:
    int num3, num4;

    public:
      virtual void Read()
      {
        cout<<"2.o Enter Four Number of your mind :\t"<<endl;
        cin>>num1>>num2>>num3>>num4;
      } // end of 2nd read function.
      
      
      virtual void Display()
      {
       cout<<"Your four entered numbers are "<<num1<<",\t"<<num2<<",\t"<<num3<<",\t,"<<num4<<"."<<endl;
      } // end of 2nd display function.
      
      
}; // end of sub class.

// where the execution of program begins 
int main() 
{ 
 Base *ptr; //creates a pointer .
 
 Base b;
 Sub s;
 ptr = &b; //give the address of object(b) of class Base.
 
 ptr->Read();
 ptr->Display();
 
 ptr = &s;  //give the address of object(s) of class Sub.
 ptr->Read();
 ptr->Display();
 
// cout<<endl<<endl<<"YOUR PROGRAM RUNS SUCCESFULLY ! ;-)\n\t\t\t\tTHANK YOU !";
 
    return 0; 
} 

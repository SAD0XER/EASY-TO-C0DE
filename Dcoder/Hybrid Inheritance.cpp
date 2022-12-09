#include <iostream>
#include <stdio.h>
#define co cout        /*created shotcut for cout*/
#define c cin        /*created shotcut for cin*/
using namespace std;
/*Compiler version g++ 6.3.0*/

class Student        /*parent class*/
{
  protected:
    char Name[25];
    int Roll_No;
}; //end of class Student.

class Test: public Student        /*parent+chiled class*/
{
  public:
    int Marks;
    void Read()
    {
      co<<"\t---== THIS PROGRAM IS THE EXAMPLE OF \"HYBRID INHERITENCE\" ===---";
      co<<"\n\n\tEnter Your Name:";
      fgets(Name,25,stdin);
      co<<"\n\n\tEnter Your Roll No:";
      c>>Roll_No;
      co<<"\n\n\tEnter Your Marks:";
      c>>Marks;
    } //end of Read function.
    
}; //end of Test class.

class Sport        /*other parent class*/
  {
    protected:
      int choice;
      public:
        void Accept()
        {
          co<<"\n\n\t1. Student Number has WON in National sports Event.\n2.\tStudent not WON any National Sports Events.\n\n--:ENTER OPTION NUMBER:-\t";
          c>>choice;
        }  //end of Accept function.
  }; //end of Sport class.
  
  class Result:public Test,public  Sport        /*this is a child class of Test class & Sport class*/
    {
      int Total;
      public:
        void calculate()
        {
          if(choice == 1)
          { Total = Marks + 15; }
          else
          { Total = Marks; }
        }  //end of Result function.
        void Display()
        {
          co<<"\nThe Total Number of your Marks:"<<Total;
        }  //end of Display function.
    };  //end of Rusult class.
    
int main()
{
  Result R;
  R.Read();
  R.Accept();
  R.calculate();
  R.Display();
  return 0;
}
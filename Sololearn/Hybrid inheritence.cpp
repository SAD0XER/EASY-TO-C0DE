/*
PROGRAM NAME: HYBRID INHERITANCE
NOTE: 1) First Enter your Name.
      2) Second Enter your Roll Number.
      3) Third Enter your Marks.
      4) Forth Enter your Choice number(1/2).
      
CREDIT: collage
DATE: 18\03\2021
NAME OF AUTHOR: sad
*/
#include <iostream>
#include <stdio.h>
#define co cout        /*created shotcut for cout*/
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
      co<<"\t---==THIS PROGRAM IS THE EXAMPLE OF \"HYBRID INHERITENCE\"===---";
      co<<"\n\n\tEnter Your Name:";
      fgets(Name,25,stdin);
      co<<"\n\n\tEnter Your Roll No:";
      cin>>Roll_No;
      co<<"\n\n\tEnter Your Marks:";
      cin>>Marks ;
    } //end of Read function.
    
}; //end of Test class.

class Sport        /*other parent class*/
  {
    protected:
      int choice;
      public:
        void Accept()
        {
          co<<"\n=====================================================\n||\t1. Student Number has WON in National sports Event.\n||\t2. Student not WON any National Sports Events.\n==========================================================\nENTER OPTION NUMBER:\t"<<endl;
          cin>> choice;
        }  //end of Accept function.
  }; //end of Sport class.
  
  class Result:public Test , public Sport        /*this is a child class of Test class & Sport class*/
    {
      int Total;
      public:
        void Calculate()
        {
          if(choice  == 1)
          Total = Marks  + 15;
          else
          Total = Marks;
        }  //end of clalculate function.
        
        void Display()
        {
          co<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nName-:";
          fputs(Name , stdout);
          co<<"Roll Number:"<<Roll_No<<endl;
          co<<"Exam Marks:"<<Marks<<endl;
          co<<"Total Number of your Marks:"<<Total;
        }  //end of Display function.
    };  //end of Rusult class.
    
 int main()
{
  Result R;
  R.Read ();
  R.Accept ();
  R.Calculate();
  R.Display ();
  return 0;
}
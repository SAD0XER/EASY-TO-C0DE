// edit on: 07/10/2022-Real File Name: 2 Initialization list in 2 ways in c++ . cpp
//  Created by George Tzirtzilakis

#include <iostream>
using namespace std;

// first way: with header files 
// here the header class 
class MyClass {
    public:
        MyClass(int a, int b);
    private:
        int regVar;
     const   int constVar;
};
// here the initialisation list 
MyClass::MyClass(int a, int b)
: regVar(a), constVar(b)
{
    cout << "Using init list 1st way :" << endl;
    cout << regVar << endl;
    cout << constVar << endl;
};

// second way : use init list 
//  directly on object definition 
class MyClass2 {
    public: 
    MyClass2(int a, int b) : a1(a), a2(b)
    {
       cout << "Using init list 2nd way :" << endl;
       cout << a1 << endl << a2 << endl; 
    }
    private: 
    int a1;
  const  int a2;
};

int main() {
    MyClass obj(42, 33);
    MyClass2 obj2(1,2);
}

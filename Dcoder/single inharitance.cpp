#include <iostream>
#define co cout
using namespace std;
#include <string.h>
//Compiler version g++ 6.3.0
class Lion
{
  public:
    char name[100];
    
};//end of base(father) class
class cub:public Lion
{
    Lion l;
    public:
    void Name()
    {
      co<<"-----Enter Your Name: ";
      cin>>l.name;
      co<<"\nMy name is: "<<l.name<<endl<<"\nHow many character's in your name ?\nAnswer: There are ";
      co<<strlen(l.name)<<" character's in your name. i.e.,"<<l.name<<".";
     }
};//end of Derived(chiled) class
int main()
{
  cub c;
  c.Name();
  return 0;
}
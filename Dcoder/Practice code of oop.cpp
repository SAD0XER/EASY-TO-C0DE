//Compiler version g++ 6.3.0

//-----------------------------------
  #include <iostream>
  using namespace std;
  
  //creating class
  class Student {
    // creating condtructor 
//     public:
//       Student(){
//       cout<<"THIS IS A STARTING OF THE PROGRAM."<<endl;
//     }// this is the end of Constructor.
   public:
      int age = a;
      char gen, sex;
      
      void show(){
          
          gen = sex;
          
          cout<<"My Age is "<<age<<" and my Gender is "<<gen;
      }
      
      void get(int a, char s){
         
        sex = s;
      
      if (sex == 'm'||'m'){
        show();
      }
      else if (sex == 'f'||'F'){
        show();
      }
      }
      }; // end of class
  
  int main(){
      Student sad;
      sad.get(34,'m');
//       sad.show();
    return 0;
  }
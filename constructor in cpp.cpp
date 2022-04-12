//Compiler version g++ 6.3.0

//-----------------------------------
  #include <iostream>
  using namespace std;
  
  //creating class
  class Student {
    // creating condtructor 
    Student(){
      cout<<"THIS IS A STARTING OF THE PROGRAM."<<endl;
    } // this is the end of Constructor.
   /* private:
    int age, gen;
    
    public:
      void get(int a, char s){
        a = age;
        s = gen;
      
      if (sex == 'm'||'m'){
        void show(){
        cout<<"MY AGE IS "<<age<<"\nAnd i am a BOY.";
      }
      elseif (sex == 'f'||'F'){
        void show(){
        cout<<"MY AGE IS "<<age<<"\nAnd i am a GIRL.";
      }
      }*/
    ~Student(){
      cout<<"THIS IS THE END OF THE PROGRAM.";
    } //This is the end of Constructor.
  }; // end of class
  
  int main(){
    Student sad;
  //  sad.get(34,'m');
   // sad.show();
    return 0;
  }

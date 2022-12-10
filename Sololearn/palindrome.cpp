 #define co cout
 #include <iostream>
 using namespace std;
 class sad
 {
      private:
      
      int num;
      void readno(){//co<<"Enter number:";
        cin>>num;  }//end of function..
      
      public:
      
      void palindrome(){
      int n1,d ,sum;
       readno();
      sum=0;
      n1=num;
      
      while(n1!=0) {d=n1%10;
      sum=d + (sum * 10);
      n1 = n1 / 10;
                   }//endloop.
      if (sum==num)
       {co<<"Number is palindrome.\n";}
      else
     {co<<"Number is not Palindrome.";}
                    
                        }//end of fun.
   };//end of sad class.
  
  int main() {
  co<<"This Program for number is palindrome Or not !\n\n";
  
  sad s;//here i declare the object of my class.
   s.palindrome();//this is my function call.

    return 0;
             }
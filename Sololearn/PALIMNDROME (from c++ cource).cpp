/*
NOTE: This code is from C++ course, not from Code Coach.

<!--In this code just directly click on  the RUN button.

&& Enter any integer number.

&& and check your entered number is palindrome or NOT.-->
*/
#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    
    int a=x;
    
    int rev_num = 0;

    while (x > 0) {

        rev_num = rev_num * 10 + x % 10;

        x = x / 10;
        }//end of while loop.
        
if (rev_num==x || rev_num == a) {
    return true;
}
else {
    return false;
}

}//end of function.

/*----------------*/
int main() {
    int n;
    cin >>n;
    
isPalindrome (n);//function call and passing vlue. 
    if(isPalindrome(n) == true ) {
        cout <<n<<" is a palindrome.";
    }
    else if (isPalindrome (n)==false){
        cout << n<<" is NOT a palindrome";
    }
    
    return 0;//end of the program.
}
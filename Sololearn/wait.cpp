#include <iostream>
using namespace std;

int main() {
//int n,rev,rem;
//n=24;
//rem=n%10;
//rev=rev * 10 + rem;
//cout<<rev;
int n, rev = 0, remainder;
cout<<"Enter an integer: "<<endl;

cin>>n;

while (n != 0){ 

remainder = n % 10; 

rev = rev * 10 + remainder;
 n /= 10; 
             } 

cout<<"Reversed number ="<<rev<<endl; 

return 0; 
}

/*
include <stdio.h>int main() { int n, rev = 0, remainder; printf("Enter an integer: "); scanf("%d", &n); while (n != 0) { remainder = n % 10; rev = rev * 10 + remainder; n /= 10; } printf("Reversed number = %d", rev); return 0; } 
*/
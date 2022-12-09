// Compiler version JDK 11.0.2
import java.util.*;
 class Dcoder
 {
   public static void main(String args[])
   { 
    System.out.println("Enter the number for fibbonacci series: ");
    Scanner input = new Scanner(System.in);
    int N = input.nextInt();
    int n1=0, n2=1, i=0,nth=0;
    
    
    while (i<N){
      System.out.println(nth);
      nth = n1 + n2;
       //update values
       n1 = n2;
       n2 = nth;
       i += 1;
    }// end of while loop
    
   }
 }
/*
num = int (input("Enter that you want to find fibonacci sriese."))
num1 = 0
num2 = 1
inc = 0
while (inc < num):

'''# THIS IS DIRECTLY COPIED PROGRAM.
#0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144
# Program to display the Fibonacci sequence up to n-th term
nterms = int(input("How many terms? "))
# first two terms
n1, n2 = 0, 1
count = 0
# check if the number of terms is valid
if nterms <= 0:
   print("Please enter a positive integer")
# if there is only one term, return n1
elif nterms == 1:
   print("Fibonacci sequence upto",nterms,":")
   print(n1)
# generate fibonacci sequence
else:
   print("Fibonacci sequence:")
   while count < nterms:
       print(n1)
       nth = n1 + n2
       # update values
       n1 = n2
       n2 = nth
       count += 1
'''
  
*/
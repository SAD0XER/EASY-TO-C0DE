/*public class Program
{
    public static void main(String[] args) {
        
    }
}
----------------------*/

//
/* Program Name: Program to generate fibonacci series.

Note: Just Enter the Number that you want to Generate Fibonacci Series. */

import java.util.*;
 class Dcoder
 {
   public static void main(String args[])
   { 
    //System.out.println("Enter the number for fibbonacci series: ");
    System.out.println("Fibonacci Series:");
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
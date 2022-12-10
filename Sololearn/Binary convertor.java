import java.util.Scanner;

// class 
public class Converter {

//static method
public static String toBinary(int num){

String binary="";

while(num > 0) {
   binary = (num%2)+binary;
   num /= 2;
} //eof loop

return binary;
}//eof func

}//eof class

// main program
public class Program {
    public static void main(String[ ] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();

//calling "toBinary" Method thorough its Class name, becouse it is a static method.
System.out.print(Converter.toBinary(x));
    }
}
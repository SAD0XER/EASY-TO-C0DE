/* PROGRAM NAME: LOAN CALCULATOR
TIP: THIS PROGRAM IS INSPIRED FROM JAVA COURSE.
DATE: 04/02/2022
*/
import java.util.Scanner;
public class Sad
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        int amount = scanner.nextInt();
        int temp = 0;
        for ( int i = 0; i<3; i++)
        {
            amount = amount * 90 / 100;
        }

        System.out.println(amount);
    }
}

/*
import java.util.Scanner;

public class Program
{
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int amount = scanner.nextInt();
		//your code goes here
		
	}
}
*/
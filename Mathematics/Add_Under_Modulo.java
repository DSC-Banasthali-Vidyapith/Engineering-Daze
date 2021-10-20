/*
Program for Addition under modulo in JAVA

Problem Statement: Add two numbers and print their sum under another modulo variable.

Algorithm:

    Input two numbers for the sum and another for the modulo variable from the user.

    Then we will call the method and pass the input variables to do the whole operation.

    Then for the operation we will define and initialize the method.
    Then we will add the two numbers 'x' and 'y' and then we will take modulo of that sum with variable 'm'.

    Then we will return the answer and print the answer we need.
 */
import java.util.Scanner;

public class AddUnderModulo {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter two numbers for the sum :");
        int x = input.nextInt();
        int y = input.nextInt();
        System.out.println("Enter the modulo variable :");
        int m = input.nextInt();

        //Calling 'Solution' method and later printing the returned value i.e. answer.
        System.out.println("Answer : "+ Solution(x, y, m));
    }
    //Solution method
    static int Solution(int x,int y,int m){
        //adding the two inputs
        int sum = x + y;
        //Taking modulo of the sum with m.
        sum = sum % m;

        return sum;
    }
}

/*
INPUT 1

Enter two numbers for the sum: 20 30
Enter the modulo variable: 5

OUTPUT

Answer : 0

INPUT 2

Enter two numbers for the sum: 10 15
Enter the modulo variable: 4

OUTPUT

Answer : 1

Time complexity: O(1)
Because the variables we input are fixed.
Space Complexity: O(1)
Because we don't use any auxiliary space.

 */
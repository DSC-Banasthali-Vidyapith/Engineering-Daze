    // Program to Reverse a String in Java.
    // Input a String from the user. Reverse the String and print the output.
    /*
     * Algorithm:
     *
     * -Input a String from the user using the Scanner class.
     * -Declare and initialise a new String variable.
     * -Run a for loop that extracts each character of the inputted String in a backward manner,
     *  i.e. it first extracts the character at last index, then the one at 2nd last index, and so on.
     * -Keep adding the extracted characters in the new String.
     * -Once the for loop is complete, the new String will be the reverse of the inputted String. Print it.
     */

    import java.util.*;

    class Reverse_a_String
    {
        public static void main(String[] args) {
            
            // Inputting a String from the user
            Scanner sc= new Scanner(System.in);
            System.out.println("Enter a String");
            String str=sc.nextLine();
        
            // Declaring and Initialising a new String
            String rev=""; 
            
            int len=str.length();
        
            // for loop for extracting each character of the given string in a backward manner and adding it in the new string
            for(int i=len-1; i>=0; i--)
            {
              rev=rev+str.charAt(i);
            }
        
            // Printing the reversed String
            System.out.println(rev);
            sc.close();
        }
    }

    /*
     * INPUT 1 :
     * Enter a String: Reverse
     * 
     * OUTPUT 1 :
     * The Original String: Reverse
     * The Reversed String: esreveR
     * 
     * INPUT 2 :
     * Enter a String: Reverse a String
     * 
     * OUTPUT 2 :
     * The Original String: Reverse a String
     * The Reversed String: gnirtS a esreveR
    */
   
    /*
     * Time Complexity: O(N)
     * where N is the length of the given String
     * 
     * Space Complexity: O(N)
     * where N is the length of the given String
    */


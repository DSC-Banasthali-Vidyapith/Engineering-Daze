
import java.util.*;

/*
The Question is-
Given an array arr[] containing N integers.
In one step, any element of the array can either be increased or decreased by one.
Find minimum steps required such that the product of the array elements becomes 1.

Algorithm
1.To make the product equal to one, it is necessary to make all the elements of array either 1 or -1. 
2. Change every positive number to 1 and all the negative number to -1. We can change 0 to either positive or negative. 
3. Check if number of -1 is even or odd. If it is even, then no problem but if it is odd then- 
       i) if 0 is present in array then change 0 to one
       ii) else ans will be (ans+2) because it will take two steps to make -1 to 1.
*/
// Java implementation of the approach
class product_equals_one{
 
   // for finding minimum steps
    static int MinStep(int arr[], int n)
    {
 
        // To store the count of 0s, positive
        // and negative numbers
        int pos = 0,
            neg = 0,
            zero = 0;
        int steps = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) {
                zero++;
            }
            else if (arr[i] < 0) {
                neg++;
                steps = steps + (-1 - arr[i]);
            }
            else {
                pos++;
                steps = steps + (arr[i] - 1);
            }
        }
        if (neg% 2 == 0) {
            // As count of negative is even
            // so we will change all 0 to 1
            // total cost here will be
            // count of 0s
            steps = steps + zero;
        }
        else {
            if (zero > 0) {
                steps = steps+ zero;
            }
            else {
                steps = steps + 2;
            }
        }
 
        return steps;
    }

    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter length of array");
        int n=sc.nextInt();
        int a[] = new int[n];
        System.out.println("Enter array elements:");
        for(int i=0;i<n;i++)
        a[i]=sc.nextInt();
        System.out.println(MinStep(a, n));
        sc.close();
    }
}
 



/*

Time Complexity:O(n)
Space ComplexityO(1)

*/

/*
1.
Input-
Enter length of array
5
Enter array elements:
2 3 -3 -2 4
Output-
9






2.
Input-
Enter length of array
5
Enter array elements:
1 2 3 0 -4
Output-
7



*/




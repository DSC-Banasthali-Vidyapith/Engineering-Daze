/**
 * Problem Statement:
 * AIM : Given an array of n integers, find the third largest element. 
 * All the elements in the array are distinct integers.
 * Input: arr[] = {1, 14, 2, 16, 10, 20}
 * Output: The third Largest element is 14
 * Explanation: Largest element is 20, second largest element is 16
 * and third largest element is 14
 */

/**
 * Algorithm Description:
 * Basic Loop:
 * 1. Iterate through the entire array to find the highest element
 * 2. Pop the highest element
 * 3. Repeat 1 & 2 for 3 times.
 * Print the max element obtained third time.
 */

import java.io.*;
import java.util.*;

class ThirdLargest {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter the size of array:");
        int length = Integer.parseInt(br.readLine());
        int[] arr = new int[length];
        System.out.println("Enter the array elements followed by a space:");
        StringTokenizer st = new StringTokenizer(br.readLine());
        for(int loop = 0; loop < arr.length; loop++) {
            arr[loop] = Integer.parseInt(st.nextToken());
        }
        //find max 3 times
        for(int loop = 0; loop < 3; loop++) {
            int max = arr[0];
            int index = 0;
            for(int inner = 0; inner < arr.length; inner++) {
                if(arr[inner] > max) {
                    max = arr[inner];
                    index = inner;
                }
            }
            if(index == arr.length - 1) {
                //pop the last element
                arr[index] = '\0';
            } else {
                //array shift
                for(int shift = index; shift < arr.length - 1; shift++) {
                    arr[shift] = arr[shift + 1];
                }
            }
            //print highest
            System.out.print((loop == 2) ? "Third Highest element: " +max +"\n" : "");
        }
    }
}

/**
 * Output:
 * Enter the size of array:
 * 6
 * Enter the array elements followed by a space:
 * 1 14 2 16 10 20
 * Third Highest element: 14
 */
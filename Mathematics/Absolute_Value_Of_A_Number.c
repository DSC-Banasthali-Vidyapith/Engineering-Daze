//C Program to find the absolute value of a number:
//Problem Statement: Given a number, write a program to find its absolute value.

/* Algorithm- 
To find the absolute value of a number:
1. Start
2. Declare variable 'num' to store input value.
3. Take input from user.
4. if num<0, display (-num), else display (num)
5. Stop
*/
#include<stdio.h> //Included the standard input/output header file

//User-Defined Function Body containing logic:
int avalue(int num) /*declaring and defining user-defined function, avalue() 
                        which finds the absolute value of a number.*/
{
    if(num < 0)       // If conditional statement to check if input value is negative.     
    return -num;   // Will return -(-num) which is +num, if num is negative.
    return num;    // Otherwise, will return num.
}

//Main Function:
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num); //Taking input from user
    printf("Absolute value of inputted number: %d", avalue(num)); //Calling user-defined function avalue() in main()
    return 0; 
}

/*
Test Case 1:
Input: 
Enter a number: -20
Output:
Absolute value of inputted number: 20
Test Case 2:
Input: 
Enter a number: 20
Output: 
Absolute value of inputted number: 20
Time Complexity: O(1) 
Space Complexity: O(1)
*/

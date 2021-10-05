//C Program to reverse a string:
//Problem Statement: Given a string of size N. Reverse the string and display it.

/* Algorithm- 
To reverse a string :
1. Start
2. Declare a user-defined function revstr() 
3. Run a for loop using the swapping logic in definition of revstr()
4. Run another for loop for displaying the reversed string
5. Under main() take user input for string.
6. Call revstr() in main()
7. Stop
*/

#include<stdio.h> //included the standard input/output header file

//User-Defined Function Body containing logic:
void revstr(char s[]) /*declaring and defining user-defined function, revstr() 
                        which reverses a string by using swapping logic*/
{
    int a, n;         //initializing a counter variable 'a' and another 'n'
    int temp = 0;     //initializing a temporary variable 'temp' to store the swapped value
    for(n=0; s[n] != 0; n++); //a for loop to check if s[] is empty or not
    for(a=0; a<n/2; a++) //another for loop for non-empty string, where swapping takes place
    {
        temp = s[a];
        s[a]=s[n - 1 - a];
        s[n - 1 - a] = temp;
    }
    for(a = 0; a < n; a++) //another for loop, to display the reversed string
    
        putchar(s[a]);
        printf(" is the reversed string .");
    printf("\n");
}


//Main Function:
int main(void)
{
    char s[1000]; 
    printf("Insert the string to be reversed: ");
    scanf("%s", s); //Taking input string from user
    revstr(s); //Calling user-defined function revstr() from main()
    return 0;
}

/*
Test Case 1:
Input: 
Insert the string to be reversed: abc
Output:
cba is the reversed string .

Test Case 2:
Input: 
Insert the string to be reversed: arushi
Output: 
ihsrua is the reversed string .

Time Complexity: O(N) 
Space Complexity: O(1)
*/



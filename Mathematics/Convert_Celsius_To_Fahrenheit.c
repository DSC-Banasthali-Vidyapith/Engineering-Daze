/*
this is a simple program to convert the temperature from 
celsius to fahrenheit by simply applying its mathematical
formula
*/
#include <stdio.h>
int main()
{
    float celsius, fahrenheit;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius); //taking input
    //celsius to fahrenheit conversion formula
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2f degree Celsius = %.2f degree Fahrenheit", celsius, fahrenheit); 
	//print the temperature upto 2 decimal places
   
}

/*
INPUT 1:
Enter the temperature in Celsius: 0

OUTPUT 1:
0.00 degree Celsius = 32.00 degree Fahrenheit

INPUT 2:
Enter the temperature in Celsius: 100

OUTPUT 2:
100.00 degree Celsius = 212.00 degree Fahrenheit

time complexity : O(1) It means that it will always run in the same amount of time, no matter the input size.
space complexity: O(1)
*/

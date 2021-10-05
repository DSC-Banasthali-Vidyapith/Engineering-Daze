//Program to Reverse an Array in C


/*
 Algorithm:
 
   Input an Array from the user by using for loop.
   
   Then for Reversing we will swap the first element of the 
   array with the last element, 2nd element with the last 
   2nd element and so on.
   
   Then we will print the reversed array by using for loop.
*/

#include<stdio.h>
#define N 50
void main()
{
  int size,i,temp,Array[N];
  printf("Enter the size of the Array: ");
  scanf("%d",&size);
  
  printf("Enter the elements of the Array: ");
  
//Inputing of element in an Array
   
  for(i=0;i<size;i++)
  scanf("%d",&Array[i]);
  
//Printing the original array
printf("\nThe original Array is: ");
  for(i=0;i<size;i++)
  {
    printf("%d ",Array[i]);
  }
  
//Reversing the Array by swaping
  for(i=0;i<size/2;i++)
  {
    temp=Array[i];
    Array[i]=Array[size-1-i];
    Array[size-1-i]=temp;
  }
  
//printing the reversed array
printf("\nThe Reversed Array is: ");
  for(i=0;i<size;i++)
  printf("%d ",Array[i]);
}

/*
INPUT 1

Enter the size of the Array: 5
Enter the elements of the Array: 1 2 3 4 5

OUTPUT

The original Array is: 1 2 3 4 5
The Reversed Array is: 5 4 3 2 1

INPUT 2

Enter the size of the Array: 6
Enter the elements of the Array: 10 20 30 40 50 60

OUTPUT

The original Array is: 10 20 30 40 50 60
The Reversed Array is: 60 50 40 30 20 10

Time Complexity: O(N)
where N is the number of elements present in the array.
Space Complexity: O(1) 
because we don’t use any auxiliary space
we just use start and end variables to swap the array.

*/


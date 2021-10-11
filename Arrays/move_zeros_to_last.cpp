/*
Question: Given an array of random numbers move all zeros of array to the end
Approach/Algo:
Step 1: Iterate through the array from left to right and maintain count of non-zero elements
Step 2: The element other than 0 i.e arr[i], put the element at arr[count] and increment count
Step 3: The count will be at first 0 element, just iterate a loop to end and make element zero.
*/


#include <iostream>
using namespace std;

void pushZerosToEnd(int arr[], int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
		if (arr[i] != 0)
			arr[count++] = arr[i];

    for(int j=count;j<n;j++)
        arr[count++] = 0;
}


int main()
{
	int arr[] = {1, 2, 0, 4, 3, 0, 5, 0};
	int n = sizeof(arr) / sizeof(arr[0]);
	pushZerosToEnd(arr, n);
	cout << "Array after zeros pushed to end:\n";
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	return 0;
}

/*
Test Cases:

1. 
Input: arr = {1, 2, 0, 4, 3, 0, 5, 0};
Output: arr = {1, 2, 4, 3, 5, 0, 0, 0};


2. 
Input: arr = {2, 1, 4, 0, 1, 7, 0, 5, 0}
Output: arr = {2, 1, 4, 1, 7, 5, 0, 0, 0}

*/
/*
Time complexity: O(n) --> (Since looping through the array of n element) 
Space complexity: O(1)
*/
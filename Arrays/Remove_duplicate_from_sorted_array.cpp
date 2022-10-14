/*
Approach:
step 1: Create an extra array to store unique elements from the array\
step 2: Traverse input array and one by one copy unique elements from original array in extra array. Also update count of unique elements. 
step 3: Copy count number of element from extra array to original array and return count for indexing.
*/

//code

#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int size)	//function to remove duplicate and return new size
{

	if (size == 0 || size == 1) //to check and return if array is empty or contains a single element
		return size;

	int temp[size];

	int count = 0;
	for (int i = 0; i < size - 1; i++)	//If current element is not equal to next element then store that current element
		if (arr[i] != arr[i + 1])
			temp[count++] = arr[i];

	temp[count++] = arr[size - 1];	//Store the last element as whether it is unique or repeated, it hasn't stored previously

	// Modify original array
	for (int i = 0; i < count; i++)
		arr[i] = temp[i];

	return count;
}

int main()
{
	int size; //size of the array
	cout << "Enter the size of the array: ";
	cin >> size;
	int arr[size];
	cout << "\nEnter array : ";
	for (int i = 0; i < size; i++)	//loop to get array elements
	{
		cin>>arr[i];
	}
	
	size = removeDuplicates(arr, size);		// removeDuplicates() returns new size of array.

	for (int i = 0; i < size; i++)	//loop to print updated array
		cout << arr[i] << " ";

	return 0;
}

/*
Test cases: 

1.
Input- 
5
1 2 2 3 3 3
Output- 1 2 3


2.
Input-
7 
1 2 3 4 4 5 6
Output- 1 2 3 4 5 6

*/

/*
Time Complexity : O(n) 
Space Complexity : O(n)
*/

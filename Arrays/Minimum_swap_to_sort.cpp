/*
Question: Minimum number of swaps required to sort an array.
Approach/Algo(Using HashMap):
Step 1: Create copy of the array and sort the new array.
Step 2: Create a map, mapping the array element to its respective index.
Step 3: Iterate the array and if the element is not in its sorted position then swap with the element which should be in its position,also increment the result
Step 4: Update the indices of  hashmap accordingly.
*/


#include<bits/stdc++.h>
using namespace std;

void swap(vector<int> &arr, int i, int j)
{
	int tem = arr[i];
	arr[i] = arr[j];
	arr[j] = tem;
}

int minimumSwaps(vector<int>arr, int n)
{
	int ans = 0;
	vector<int>tem = arr;

	//Hashmap which stores the indices of the input array
	map <int, int> mp;

	sort(tem.begin(), tem.end());//Sorting the temporary array.

	for (int i = 0; i < n; i++)
		mp[arr[i]] = i;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] != tem[i])//This is checking whether the current element is at its sorted position or not.
		{
			ans++;
			int t = arr[i];

			swap(arr, i, mp[tem[i]]);//If not swap this element with the index of element which should be here instead

			mp[t] = mp[tem[i]];//Update the hashmap acordingly.
			mp[tem[i]] = i;
		}
	}
	return ans;//return the minimum swaps done.
}


int main()
{
	int n;

	cout << "Enter the size of the array : ";
	cin >> n;

	vector <int> a(n);
	cout << "\nEnter the elements into the array :\n";
	for (int i = 0; i < n; i++)
		cin >> a[i];

	cout << minimumSwaps(a, n);
	return 0;
}

/*
Test Cases:

1.
Input: arr = {1, 2, 10, 4, 3, 8, 5, 6};
Output: 4


2.
Input: arr = {2, 1, 4, 6, 1, 7, 9, 5, 8}
Output: 7

*/
/*
Time complexity: O(nlogn) --> (Sorting of the temporary copied array)
Space complexity: O(n) --> (Creating a copy of the original array)
*/

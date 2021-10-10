/*
Algorithm --
1) create a hash map to store element and its frequency
2) store frequency and the element in the min-heap(priority queue) from the hash-map
3) if size of priority queue becomes greater than k , pop the top element
4) Once all the elements of hash map are put in a Priority queue, we get the top k elements.
*/
#include <iostream>
#include <unordered_map>
#include <queue>
using namespace std;

vector<int> topKFrequentElements(vector<int> &nums, int k)
{
    if (k == nums.size())
        return nums;

    //using an unordered map to store {element} -> frequency
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
        mp[nums[i]]++;

    //using a min-heap to store {frequency,element}
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    for (auto it : mp)
    {
        pq.push({it.second, it.first});

        //maintaining k elements in the min-heap
        if (pq.size() > k)
            pq.pop();
    }
    //now, the min-heap contains the k most frequent elements and their frequencies

    //storing the k most frequent elements in an array
    vector<int> ans;
    while (k--)
    {
        ans.push_back(pq.top().second);
        pq.pop();
    }
    return ans;
}
int main()
{
    int n, k;

    cout << "Enter the size of array :";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of array :";
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    cout << "Enter value of k :";
    cin >> k;

    vector<int> ans = topKFrequentElements(nums, k);

    cout << "Top k Frequent Elements are : ";
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
}

/*
SAMPLE INPUT/OUTPUT 1:

Enter the size of array :7
Enter the elements of array :1 2 3 1 2 1 2 4
Enter value of k :2
Top k Frequent Elements are : 2 1 

SAMPLE INPUT/OUTPUT 2:
Enter the size of array :4
Enter the elements of array :1 2 3 4
Enter value of k :4
Top k Frequent Elements are : 1 2 3 4 

Time Complexity : O(Nlogk)
Space Complexity : O(N + k)

*/
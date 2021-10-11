#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// Making a custom comparator function using struct
// Function will compare any two numbers, say A and B
// Function will accept A and B as integers and combine them in two ways- AB and BA
// if AB > BA then AB is returned, else BA

struct {
    bool operator()(int x, int y) const
    {
        string value1 = to_string(x) + to_string(y);
        string value2 = to_string(y) + to_string(x);
 
        return value1 > value2;
    }
} compare;


// Function to append and return the result
// Function takes in all the numbers as a vector array
// sort function sorts the array according to the comparator function
// Appends the elements in the sorted vector array to a string and returns the result

string LargestNumber(vector<int> &numberArray)
{
    sort(numberArray.begin(), numberArray.end(), compare);
    string result;
    
    for (int &i: numberArray) {
        result += to_string(i);
    }
    
    return result;
}


// Main function
 
int main()
{

    // Declaring and taking in for number of inputs   
    int n;
    cin >> n;
    
    // Declaring the vector array
    vector<int> numberArray(n);
    
    // For loop to take in the inputs one by one and adding to the vector array 
    for(int i=0; i<n; i++) {
        cin>>numberArray[i];    
    }
    
    // Printing out the answer
    cout << LargestNumber(numberArray) << endl;
 
    return 0;
}

/*
Test Cases:-

a)Input:-
  10
  22
  33
  44
  55
  66
  77
  88
  99
  11
  0

  Output:-
  9988776655443322110

b)Input:-
  6
  3
  45
  21
  112
  369
  86

  Output:-
  8645369321112  
*/

/*
Time complexity  - O(n(log(n)))
Space complexity - n, where n is the size of the array.
*/
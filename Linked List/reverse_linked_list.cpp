/*
Question: Reverse a given linked list

Approach/Algo:
Step 1: Intialize three pointers, with the following values:
prev --> NULL
curr --> HEAD
next --> NULL

Step 2: Iterate through the linked list and make the following changes:
    1. Store next node, before changing the value of next of current (next = curr -> next)
    2. Change next to curr, (curr -> next = prev)
    3. Lastly, move prev and curr one step ahead ( prev = curr, curr = next)
*/


#include <iostream>
using namespace std;

struct Node {
	int data;
	struct Node* next;
	Node(int data)
	{
		this->data = data;
		next = NULL;
	}
};

struct LinkedList {
	Node* head;
	LinkedList() { head = NULL; }


	void reverseLinkedList()
	{

        // Step-1
		Node* current = head;
		Node *prev = NULL, *next = NULL;

        // Performing Step-2.
		while (current != NULL) {
			next = current->next;

			current->next = prev;

			prev = current;
			current = next;
		}
		head = prev;
	}


	void print()
	{
		struct Node* temp = head;
		while (temp != NULL) {
			cout << temp->data << " ";
			temp = temp->next;
		}
	}

	void push(int data)
	{
		Node* temp = new Node(data);
		temp->next = head;
		head = temp;
	}
};

int main()
{

	LinkedList ll;
    //{Pushing element in linked list}
	ll.push(13);
	ll.push(5);
	ll.push(12);
	ll.push(3);

	cout << "Linked list"<<endl;
	ll.print();

	ll.reverseLinkedList();
    cout<<endl;

	cout << "Reversed Linked list "<<endl;
	ll.print();
	return 0;
}

/*
Test Case 1:
Input: 
Linked List
1 -> 2 -> 3 -> 4 -> 5 -> NULL

Output:
Reversed values of Linked list
5 -> 4 -> 3 -> 2 -> 1 -> NULL

Test Case 2:
Input: 
Linked List
3 -> 12 -> 4 -> NULL

Output:
Reversed values of Linked list
4 -> 12 -> 3 -> NULL

Time Complexity: O(N) -->Since Looping through the linked list till NULL is achived 
Space Complexity: O(1)
*/

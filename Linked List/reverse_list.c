// C program to reverse a linked list:
// Problem statement: Given a linked list of 'n' nodes. Reverse the linked list and display it.

/* Algorithm- 
To reverse a linked list :
1. Start
2. Accept the value of nodes (n) from user.
3. Create 'n' nodes of linked list by calling append() function.
4. After creating 'n' nodes call the printList() function to display the original linked list.
5. Call reverseList() function in main() which will reverse the original linked list.
6. Once the linked list is reversed call the printList() function to display the reversed linked list.
7. Stop
*/

#include <stdio.h>
#include <stdlib.h>

// Structure of the linked list node
struct Node
{
	int data;
	struct Node *next;
};

// to reverse the linked list
void reverseList(struct Node **ptr)
{
	struct Node *prev = NULL;
	struct Node *current = *ptr;
	struct Node *next = NULL;
	// check if we didn't reached to end
	while (current != NULL)
	{
		next = current->next;

		current->next = prev;

		prev = current;
		current = next;
	}
	*ptr = prev;
}

void append(struct Node **ptr, int new_data)
{
	struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->next = NULL;

	// check if linked list is empty & current node is the first node in the list
	if ((*ptr) == NULL)
		(*ptr) = new_node;
	else
	{
		// if there are more that 1 nodes already present in the list then traverse till end
		struct Node *temp = (*ptr);
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
}

// prints the linked list in proper format
void printList(struct Node *head)
{
	struct Node *temp = head;
	while (temp != NULL)
	{
		printf("%d -> ", temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
}

int main()
{
	int arr[5];

	struct Node *head = NULL;
	printf("Enter 5 integer elements: \n");

	// accept input & create linked list node
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
		append(&head, arr[i]);
	}

	printf("Initial values of linked list\n");
	printList(head);
	reverseList(&head);
	printf("Reversed values of Linked list \n");
	printList(head);
}

/*
Test Case 1:
Input: 
Enter 5 integer elements:
10 20 30 40 50
Output:
Initial values of linked list
10 -> 20 -> 30 -> 40 -> 50 -> NULL
Reversed values of Linked list
50 -> 40 -> 30 -> 20 -> 10 -> NULL

Test Case 2:
Input: 
Enter 5 integer elements:
10 20
Output:
Initial values of linked list
10 -> 20 -> NULL
Reversed values of Linked list
20 -> 10 -> NULL

Time Complexity: O(N) 
Space Complexity: O(1)
*/

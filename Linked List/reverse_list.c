#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};

void reverse(struct Node **ptr)
{
	struct Node *prev = NULL;
	struct Node *current = *ptr;
	struct Node *next = NULL;
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

	if ((*ptr) == NULL)
		(*ptr) = new_node;
	else
	{
		struct Node *temp = (*ptr);
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
}

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

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
		append(&head, arr[i]);
	}

	printf("Initial values of linked list\n");
	printList(head);
	reverse(&head);
	printf("\nReversed values of Linked list \n");
	printList(head);
}

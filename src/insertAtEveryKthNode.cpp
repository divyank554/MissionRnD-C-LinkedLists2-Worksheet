/*
OVERVIEW: Given a single linked list insert a new node at every Kth node with value K.
E.g.: 1->2->3->4->5, k = 2, 1->2->2->3->4->2->5

INPUTS: A linked list and Value of K.

OUTPUT: Insert a new node at every Kth node with value K.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * insertAtEveryKthNode(struct node *head, int K)
{
	if (head == NULL || K <= 0)
		return NULL;

	int i;
	int data = K;
	struct node *temp = head;
	int length = 0;
	while (temp != NULL)
	{
		length++;
		temp = temp->next;
	}
	
	while (K <= length)
	{
		struct node *current = head;
		struct node *prev;
		for (i = 1; i < K; i++)
		{
			current = current->next;
			if (current == NULL)
				return head;
		}


		struct node* new_node = (struct node*) malloc(sizeof(struct node));

		new_node->num = data;

		new_node->next = current->next;

		current->next = new_node;

		length++;

		K = K + data + 1;

	}

	return head;
}

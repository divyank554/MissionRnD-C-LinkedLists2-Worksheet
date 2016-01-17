/*
OVERVIEW: Given a single linked list, reverse the linked list.
E.g.: 1->2->3->4->5, output is 5->4->3->2->1.

INPUTS: A linked list.

OUTPUT: Reverse the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * reverseLinkedList(struct node *head)
{
	if (head == NULL)
		return NULL;
	struct node* temp1 = NULL;
	struct node* temp2 = head;
	struct node* next;
	while (temp2 != NULL)
	{
		next = temp2->next;
		temp2->next = temp1;
		temp1 = temp2;
		temp2 = next;
	}

	head = temp1;

	return head;

}

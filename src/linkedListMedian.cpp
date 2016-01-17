/*
OVERVIEW: Given a single sorted linked list find the median element of the single linked list.
Median is the middle element.
E.g.: 1->2->3->4->5, output is 3.

INPUTS: A sorted linked list.

OUTPUT: Return median of the linked list elements.

ERROR CASES: Return -1 for error cases.

NOTES: If length is even, return average of middle pair of numbers.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

int linkedListMedian(struct node *head)
{
	if (head == NULL)
		return -1;
	struct node *temp1 = head;
	struct node *temp2 = head;
	int i = 0,j = 0, n;

	if (head != NULL)
	{
		while (temp1 != NULL && temp1->next != NULL)
		{
			j++;
			temp1 = temp1->next->next;
			if (temp1 != NULL)
			{
				i++;
				temp2 = temp2->next;
			}
		}

	}

	n = temp2->num;

	if (j == i)
		return temp2->num;
	if (j > i)
	{
		temp2 = temp2->next;
		return (n + temp2->num) / 2;
	}

}

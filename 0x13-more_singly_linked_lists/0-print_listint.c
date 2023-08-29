#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint-counts the nodes in the linked list
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *head)
{
	int counts;

	if (head == NULL)
		return (0);
	counts = 0;
	while (head->next != NULL)
	{
		if (head->new)
			printf("%d\n", head->new);
		counts++;
		head = head->next;
	}
	if (head->new)
		printf("%d\n", head->new);
	counts++;
	return (counts);
}

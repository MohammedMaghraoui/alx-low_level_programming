#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint-root the nodes in the linked list
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int root;

	if (h == NULL)
		return (0);
	root = 0;
	while (h->next != NULL)
	{
		if (h->n)
			printf("%d\n", h->n);
		root++;
		h = h->next;
	}
	if (h->n)
		printf("%d\n", h->n);
	root++;
	return (root);
}

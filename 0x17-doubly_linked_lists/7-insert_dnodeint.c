#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: pointer to the pointer to the head of the list
 * @idx: index of the new node
 * @n: value of the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new = NULL;
dlistint_t *head = *h;
unsigned int i = 0;

if (idx == 0)
{
new = add_dnodeint(h, n);
}
else
{
while (head != NULL && i < idx - 1)
{
head = head->next;
i++;
}

if (head != NULL || (i == idx - 1 && idx == 1))
{
new = malloc(sizeof(dlistint_t));
if (new != NULL)
{
new->n = n;
new->next = (i == idx - 1) ? *h : head->next;
new->prev = (i == 0) ? NULL : head;
if (head->next != NULL)
{
head->next->prev = new;
}
if (i == 0)
{
*h = new;
}
else
{
head->next = new;
}
}
}
}
return (new);
}

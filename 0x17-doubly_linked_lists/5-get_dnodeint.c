#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 *
 * @head: pointer to the head of the list
 * @index: index of the node to retrieve
 *
 * Return: the node at the specified index or NULL if not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i;

if (head == NULL)
return (NULL);

for (i = 0; i < index && head != NULL; i++)
head = head->next;

if (i != index || head == NULL)
return (NULL);

return (head);
}

#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 *
 * @head: double pointer to the head of the list
 * @index: index of the node to delete (starting at 0)
 *
 * Return: 1 if succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current = *head;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = current->next;
if (*head != NULL)
(*head)->prev = NULL;
free(current);
return (1);
}

for (unsigned int i = 0; current != NULL && i < index; i++)
current = current->next;
}

if (current == NULL)
return (-1);

if (current->next != NULL)
current->next->prev = current->prev;
if (current->prev != NULL)
current->prev->next = current->next;

free(current);
return (1);
}

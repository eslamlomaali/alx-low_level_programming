#include "lists.h"

/**
 * delete_dnodeint_at_index - Write a function that deletes the node
 * at index index of a dlistint_t linked list.
 *
 * @head: head of linked list
 * @index: index of element
 * Return: 1 succeed, -1 if not
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *x;
	unsigned int y;

	if (*head == NULL)
		return (-1);

	x = *head;
	if (index == 0)
	{
		*head = x->next;
		if (x->next != NULL)
		{
			x->next->prev = NULL;
		}
		free(x);
		return (1);
	}
	for (y = 0; x != NULL && y < index - 1 ; y++)
	{
		x = x->next;
	}
	if (x == NULL || x->next == NULL)
	{
		return (-1);
	}

	if (x->next->next != NULL)
	{
		x->next = x->next->next;
		free(x->next->prev);
		x->next->prev = x;
		return (1);
	}
	else
	{
		free(x->next);
		x->next = NULL;
		return (1);
	}
	return (-1);
}

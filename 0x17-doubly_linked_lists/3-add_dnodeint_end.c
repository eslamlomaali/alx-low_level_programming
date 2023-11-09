#include "lists.h"

/**
 * add_dnodeint_end - Write a function that adds a new node at
 * the end of a dlistint_t list.
 *
 * @head: pointer to the list of a linked list
 * @n: value of the element
 * Return: address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *x = NULL, *y = *head;

	x = malloc(sizeof(dlistint_t));

	if (x == NULL)
	{
		return (NULL);
	}
	x->n = n;
	x->prev = NULL;
	x->next = NULL;

	if (*head == NULL)
	{
		*head = x;
		return (*head);
	}

	while (y->next != NULL)
	{
		y = y->next;
	}
	x->prev = y;
	y->next = x;

	return (x);
}

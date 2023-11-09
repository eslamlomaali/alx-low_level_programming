#include "lists.h"

/**
 * add_dnodeint - Write a function that adds a new node at
 * the beginning of a dlistint_t list.
 *
 * @head: pointer to the head of the linked list
 * @n: Value
 * Return: address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *x, *y = malloc(sizeof(dlistint_t));


	if (y == NULL)
		return (NULL);
	y->n = n;
	y->prev = NULL;
	y->next = NULL;

	if (*head == NULL)
	{
		y->next = NULL;
		*head = y;
		return (*head);
	}
	x = *head;
	y->next = x;
	x->prev = y;
	*head = y;
	return (y);
}

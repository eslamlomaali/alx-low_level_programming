#include "lists.h"

/**
 * print_listint - Write a function that prints all the
 * elements of a listint_t list.
 *
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			i++;
		}

	return (i);
}

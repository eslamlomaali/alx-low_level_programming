#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Write a function that prints all the elements
 * of a dlistint_t list.
 *
 * @h: pointer to the head of list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t x;

	for (x = 0; h != NULL; x++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (x);
}

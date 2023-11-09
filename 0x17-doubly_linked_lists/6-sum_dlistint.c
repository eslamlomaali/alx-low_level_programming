#include "lists.h"

/**
 * sum_dlistint - Write a function that returns the sum of all
 * the data (n) of a dlistint_t linked list.
 *
 * @head: pointer to the head of the linked list
 *
 * Return: summation of  data, or 0
 */
int sum_dlistint(dlistint_t *head)
{
	int s = 0;

	while (head != NULL)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}

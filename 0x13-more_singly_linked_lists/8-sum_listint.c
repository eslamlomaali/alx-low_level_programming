#include "lists.h"

/**
 * sum_listint - Write a function that returns the sum of all the
 * data (n) of a listint_t linked list.
 * @head: head of the list
 *
 * Return: sum of the number
 */

int sum_listint(listint_t *head)
{
	int s = 0;

while (head)
	{
	s += head->n;
	head = head->next;
	}
	return (s);
}

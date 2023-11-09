#include "lists.h"

/**
 * free_dlistint - Write a function that frees a dlistint_t list.
 *
 * @head: begging of the list
 * Return: no thing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *z;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((z = head) != NULL)
	{
		head = head->next;
		free(z);
	}
}

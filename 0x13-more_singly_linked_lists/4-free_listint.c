#include "lists.h"

/**
* free_listint - Write a function that frees a listint_t list.
* @head: head of the list
*
* Return: Nothing
*/

void free_listint(listint_t *head)
{
	listint_t *f;

	while (head != NULL)
	{
		f = head;
		head = head->next;
		free(f);
	}
}

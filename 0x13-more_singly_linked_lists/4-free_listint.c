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

	for (; head != NULL; head = head->next)

		{
		list_t *f = head;
			free(f);
		}
}

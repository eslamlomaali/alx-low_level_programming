#include "lists.h"

/**
  * free_list - Write a function that frees a list_t list.
  * @head: The pointer to the first node of linked list
  *
  * Return: Nothing
  */
void free_list(list_t *head)
{
	list_t *p;

	for (; head; head = head->next)
	{
		p = head;
		free(p->str);
		free(p);
	}
	free(head);
}

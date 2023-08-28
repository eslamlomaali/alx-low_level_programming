#include "lists.h"

/**
  * delete_nodeint_at_index - Write a function that deletes the node at
  * index index of a listint_t linked list.
  * @head: add of pointer
  * @index: node to be deleted
  *
  * Return: 1 it is success , 0 fail
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int c = 1;
	listint_t *node = *head, *f;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = node->next;
		free(node);
		return (1);
	}

	f = *head;
	while (f)
	{
		if (c == index)
		{
			node = f->next;
			f->next = node->next;
			free(node);
			return (1);
		}

		f = f->next;
		c++;
	}

	return (-1);
}

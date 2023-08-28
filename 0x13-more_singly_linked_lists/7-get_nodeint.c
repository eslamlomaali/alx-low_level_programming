#include "lists.h"

/**
* get_nodeint_at_index - Write a function that returns the nth
* node of a listint_t linked list.
* @head: pointer to the head of the list
* @index: index of the noe
*
* Return: the address of the node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c = 0;

	if (head)
	{
		while (head)
		{
			if (c == index)
				return (head);

			head = head->next;
			c++;
		}
	}

	return (NULL);
}

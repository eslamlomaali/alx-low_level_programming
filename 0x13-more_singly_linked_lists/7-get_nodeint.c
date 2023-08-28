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
	listint_t c
	unsigned int i = 0;

	for (c = head, i = 0; C && i < index; c = c->next, i++)
		;
	return (c);
}

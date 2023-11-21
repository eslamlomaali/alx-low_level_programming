#include "lists.h"

/**
 * print_listint_safe - prints a linked list, safely
 * @head: head if linked list
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nnn = 0;
	long int d;

	while (head)
	{
		d = head - head->next;
		nnn++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (d > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (nnn);
}

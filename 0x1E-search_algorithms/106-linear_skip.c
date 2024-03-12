#include "search_algos.h"

/**
 * linear_skip - Write a function that searches for a
 * value in a sorted skip list of integers.
 *
 * @list: input
 * @value: value to search
 * Return: index
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *fast;

	if (list == NULL)
		return (NULL);

	fast = list;

	do {
		list = fast;
		fast = fast->express;
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)fast->index, fast->n);
	} while (fast->express && fast->n < value);

	if (fast->express == NULL)
	{
		list = fast;
		while (fast->next)
			fast = fast->next;
	}

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)list->index, (int)fast->index);

	while (list != fast->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}
	return (NULL);
}

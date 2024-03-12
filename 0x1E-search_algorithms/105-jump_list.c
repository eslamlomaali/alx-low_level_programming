#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Write a function that searches for a value in a sorted
 * list of integers using the Jump search algorithm.
 *
 * @list: input
 * @size: array size
 * @value: value to search
 * Return: index
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t place, y, z;
	listint_t *old;

	if (list == NULL || size == 0)
		return (NULL);

	z = (size_t)sqrt((double)size);
	place = 0;
	y = 0;

	do {
		old = list;
		y++;
		place = y * z;

		while (list->next && list->index < place)
			list = list->next;

		if (list->next == NULL && place != list->index)
			place = list->index;

		printf("Value checked at index [%d] = [%d]\n", (int)place, list->n);

	} while (place < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)old->index, (int)list->index);

	for (; old && old->index <= list->index; old = old->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)old->index, old->n);
		if (old->n == value)
			return (old);
	}

	return (NULL);
}

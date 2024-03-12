#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Write a function that searches for a value in a sorted
 * array of integers using the Jump search algorithm
 *
 * @array: input
 * @size: array size
 * @value: value to search
 * Return: index
 */
int jump_search(int *array, size_t size, int value)
{
	int place, y, z, old;

	if (array == NULL || size == 0)
		return (-1);

	y = (int)sqrt((double)size);
	z = 0;
	old = place = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", place, array[place]);

		if (array[place] == value)
			return (place);
		z++;
		old = place;
		place = z * y;
	} while (place < (int)size && array[place] < value);

	printf("Value found between indexes [%d] and [%d]\n", old, place);

	for (; old <= place && old < (int)size; old++)
	{
		printf("Value checked array[%d] = [%d]\n", old, array[old]);
		if (array[old] == value)
			return (old);
	}

	return (-1);
}

#include "search_algos.h"

/**
 * new_search - Write a function searches for a value in a sorted array of int
 *
 * @array: input
 * @size: array size
 * @value: value to search
 * Return: index
 */
int new_search(int *array, size_t size, int value)
{
	size_t twice = size / 2;
	size_t x;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (x = 0; x < size; x++)
		printf("%s %d", (x == 0) ? ":" : ",", array[x]);

	printf("\n");

	if (twice && size % 2 == 0)
		twice--;

	if (value == array[twice])
	{
		if (twice > 0)
			return (new_search(array, twice + 1, value));
		return ((int)twice);
	}

	if (value < array[twice])
		return (new_search(array, twice + 1, value));

	twice++;
	return (new_search(array + twice, size - twice, value) + twice);
}

/**
 * advanced_binary - calls to rec_search to return
 * the index
 *
 * @array: input
 * @size: array size
 * @value: value to search
 * Return: index
 */
int advanced_binary(int *array, size_t size, int value)
{
	int place;

	place = new_search(array, size, value);

	if (place >= 0 && array[place] != value)
		return (-1);

	return (place);
}

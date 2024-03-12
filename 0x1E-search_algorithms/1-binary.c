#include "search_algos.h"

/**
 * recursive_search - Write a function that searches for a value in a
 * sorted array of integers using the Binary search algorithm
 *
 * @array: input
 * @size: array size
 * @value: value to search
 * Return: index
 */
int recursive_search(int *array, size_t size, int value)
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
		return ((int)twice);

	if (value < array[twice])
		return (recursive_search(array, twice, value));

	twice++;

	return (recursive_search(array + twice, size - twice, value) + twice);
}

/**
 * binary_search - calls to binary_search to return
 * the index
 *
 * @array: input
 * @size: array size
 * @value: value to search
 * Return: index
 */
int binary_search(int *array, size_t size, int value)
{
	int place;

	place = recursive_search(array, size, value);

	if (place >= 0 && array[place] != value)
		return (-1);

	return (place);
}

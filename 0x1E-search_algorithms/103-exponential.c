#include "search_algos.h"

/**
 * version_search - Searches for a value in a sorted array
 * of integers using binary search.
 * @array: A pointer to the first element
 * @left: The starting index
 * @right: The ending index
 * @value: The value to search
 *
 * Return: If the value is not found or the array is NULL, -1.
 * Otherwise, the index
 *
 * Description: Prints the [sub]array
 */
int version_search(int *array, size_t left, size_t right, int value)
{
	size_t x;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (x = left; x < right; x++)
			printf("%d, ", array[x]);
		printf("%d\n", array[x]);

		x = left + (right - left) / 2;
		if (array[x] == value)
			return (x);
		if (array[x] > value)
			right = x - 1;
		else
			left = x + 1;
	}

	return (-1);
}

/**
 * exponential_search - Write a function that searches for a value in a
 * sorted array of integers using the Exponential search algorithm
 * @array: A pointer to the first
 * @size: The number of elements
 * @value: The value to search
 *
 * Return: If the value is not found or the array is NULL, -1.
 * Otherwise, the index
 *
 * Description: Prints a value every time it is compared in the array.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t x = 0, paradise;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (x = 1; x < size && array[x] <= value; x = x * 2)
			printf("Value checked array[%ld] = [%d]\n", x, array[x]);
	}

	paradise = x < size ? x : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", x / 2, paradise);
	return (version_search(array, x / 2, paradise, value));
}

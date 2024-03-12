#include "search_algos.h"

/**
 * interpolation_search - Write a function that searches for a value in a
 * sorted array of integers using the Interpolation search algorithm
 *
 * @array: input
 * @size:  array size
 * @value: value to search
 * Return: index
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;
	double z;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (size)
	{
		z = (double)(high - low) / (array[high] - array[low]) * (value - array[low]);
		pos = (size_t)(low + z);
		printf("Value checked array[%d]", (int)pos);

		if (pos >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[pos]);
		}

		if (array[pos] == value																									return ((int)pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;

		if (low == high)
			break;
	}

	return (-1);
}

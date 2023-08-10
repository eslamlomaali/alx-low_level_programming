#include "main.h"

/**
  * array_range - Write a function that creates an array of integers.
  * @min: int
  * @max: int
  *
  * Return: array of integers
  */
int *array_range(int min, int max)
{
	int *m, x = 0;

	if (min > max)
	{
		return (NULL);
	}

	m = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (m == NULL)
	{
		return (NULL);
	}

	while (min <= max)
	{
		m[x] = min;
		x++;
		min++;
	}

	return (m);
}

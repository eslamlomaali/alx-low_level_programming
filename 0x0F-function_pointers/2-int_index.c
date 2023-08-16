#include "function_pointers.h"

/**
  * int_index - Write a function that searches for an integer.
  * @array: int array
  * @size: siaze of array
  * @cmp: compare
  *
  * Return: int
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;

	if (size > 0)
	{
		if (array && cmp && size)
		{
			while (a < size)
			{
				if (cmp(array[a]))
					return (a);

				a++;
			}
		}
	}

	return (-1);
}

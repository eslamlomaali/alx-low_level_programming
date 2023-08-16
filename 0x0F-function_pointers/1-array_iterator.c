#include "function_pointers.h"

/**
  * array_iterator - Write a function that executes a function given as
  * a parameter on each element of an array.
  *
  * @array: int array
  * @size: saize of array
  * @action: pointer
  *
  * Return: NOthing
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x = 0;

	if (array && action && size > 0)
	{
		while (x < size)
		{
			action(array[x]);
			x++;
		}
	}
}

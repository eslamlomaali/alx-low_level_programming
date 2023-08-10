#include "main.h"


/**
  * _realloc - Write a function that reallocates
  * a memory block using malloc and free
  *
  * @ptr: pointer to memory
  * @old_size: size of allocated space
  * @new_size: size of new mwmory
  *
  * Return: NULL if new_size = 0 && ptr != NULL
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *m;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		m = malloc(new_size);

		if (m == NULL)
			return (NULL);

		return (m);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	m = malloc(new_size);

	if (m == NULL)
		return (NULL);

	for (a = 0; a < old_size && a < new_size; a++)
	{
		m[a] = ((char *) ptr)[a];
	}

	free(ptr);
	return (m);
}

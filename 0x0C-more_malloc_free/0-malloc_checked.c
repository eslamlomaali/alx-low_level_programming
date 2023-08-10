#include "main.h"

/**
  * malloc_checked - Write a function that allocates memory using malloc.
  * @b: the size
  *
  * Return:  Always 0.
  */
void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);

	if (m == NULL)
		exit(98);

	return (m);
}

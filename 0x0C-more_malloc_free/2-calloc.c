#include "main.h"

/**
  * _calloc - Write a function that allocates memory for an array using malloc
  * @nmemb: array length
  * @size: size of elments
  *
  * Return: pointer
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int a = 0, b = 0;
	char *m;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	b = nmemb * size;
	m = malloc(b);

	if (m == NULL)
	{
		return (NULL);
	}

	while (a < b)
	{
		m[a] = 0;
		a++;
	}

	return (m);
}

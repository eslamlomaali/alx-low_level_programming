#include "main.h"

/**
  * create_array - Write a function that creates an array of chars,
  * and initializes it with a specific char.
  *
  * @size: The array size
  * @c: The input char
  *
  * Return: Null
  */
char *create_array(unsigned int size, char c)
{
	char *a = malloc(size);

	if (size == 0 || a == 0)
		return (0);

	while (size--)
		a[size] = c;

	return (a);
}

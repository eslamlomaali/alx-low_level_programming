#include "main.h"

/**
 * get_endianness - Write a function that checks the endianness.
 *
 * Return: 0 big, 1 little
 */
int get_endianness(void)
{
	unsigned int a;
	char *s;

	a = 1;
	s = (char *) &a;

	return ((int)*s);
}

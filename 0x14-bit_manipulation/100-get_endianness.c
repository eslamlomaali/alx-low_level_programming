#include "main.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 big, 1 little
 */
int get_endianness(void)
{
	unsigned int k;
	char *v;

	k = 1;
	v = (char *) &k;

	return ((int)*v);
}

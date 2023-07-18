#include "main.h"

/**
 * _islower - function that checks if
 *           character is lowercase
 *
 * @c: check input
 *
 * Return: returns 1 if `c` is lowercase
 *	0 otherwise (success)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}


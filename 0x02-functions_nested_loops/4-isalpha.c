include "main.h"

/**
 * _isalpha - function that checks if
 *           character is lowercase or uppercase
 *
 * @c: check input
 *
 * Return: returns 1 if c 0 otherwise
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

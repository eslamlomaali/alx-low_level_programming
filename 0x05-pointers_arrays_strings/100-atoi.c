#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: String input
 * Return:  integer
 */

int _atoi(char *s)

{

	int e = 0;
	unsigned int num = 0;
	int f = 1;
	int g = 0;

	while (s[e])
	{
	if (s[e] == 45)
	{
	f *= -1;
	}
	while (s[e] >= 48 && s[e] <= 57)
	{
	g = 1;
	num = (num * 10) + (s[e] - '0');
	e++;
	}
	if (g == 1)
	{
	break;
	}
	e++;
	}
	num *= f;
	return (num);
}

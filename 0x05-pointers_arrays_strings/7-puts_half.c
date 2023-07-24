#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The array string to print
 * Return: nothing
 */

void puts_half(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
		;
	for (x /= 2; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}

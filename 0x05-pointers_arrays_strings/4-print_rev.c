#include "main.h"

/**
 * print_rev - Write a function thta prints a string in reverse.
 * @s: The string to print
 * Return: void
 */

void print_rev(char *s)
{
	int a = 0;

	while (s[a])
		a++;
	while (a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}

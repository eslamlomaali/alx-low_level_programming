#include "main.h"


/**
 * print_line - a function that draws a straight line in the terminal.
 * @n: The number of lines to draw
 * Return: 0/non
 */

void print_line(int n)

{

	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
		_putchar('\n');
	}
}

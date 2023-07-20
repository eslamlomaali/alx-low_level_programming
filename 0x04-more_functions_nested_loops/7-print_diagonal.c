#include "main.h"


/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: The input number to print
 * Return: 0/non
 */

void print_diagonal(int n)

{

	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (a = 0; a < n; a++)
	{
	for (b = 0; b < n; b++)
	{
		_putchar('32');
	}
		_putchar('92');
		_putchar('\n');
	}
	}
}

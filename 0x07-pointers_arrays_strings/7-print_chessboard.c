#include "main.h"

/**
 * print_chessboard - Write a function that prints the chessboard.
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int k, q;

	for (k = 0; k < 8; k++)
	{
		for (q = 0; q < 8; q++)
			_putchar(a[k][q]);
		_putchar('\n');
	}
}

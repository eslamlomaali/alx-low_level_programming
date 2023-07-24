#include "main.h"

/**
 * print_array - Write function that prints n elements of an array of integers
 * @a: String input
 * @n: elements of the array to input
 * Return: void
 */

void print_array(int *a, int n)
{
	int y;

	for (y = 0; y < n; y++)
	{
		if (y != (n - 1))
			printf("%d, ", a[y]);
		else
			printf("%d", a[y]);
	}
	printf("\n");
}

#include "main.h"

/**
 * reverse_array - Write a function that reverses the array of integers.
 * @a: The input of array
 * @n: The number of elements
 *
 */

void reverse_array(int *a, int n)
{
	int x, y;

	for (y = n - 1; y >= n / 2; y--)
	{
	x = a[n - 1 - y];
	a[n - 1 - y] = a[y];
	a[y] = x;
	}
}

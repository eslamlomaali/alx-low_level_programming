#include "main.h"

/**
 * print_diagsums - Write a function that prints the sum of the
 * two diagonals of a square
 * @a: input array
 * @size: input szie of square
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int t, r, s1 = 0, s2 = 0;

	for (t = 0; t <= (size * size); t = t + size + 1)
		s1 = s1 + a[t];

	for (r = size - 1; r <= (size * size) - size; r = r + size - 1)
	s2 = s2 + a[r];
	printf("%d, %d\n", s1, s2);
}

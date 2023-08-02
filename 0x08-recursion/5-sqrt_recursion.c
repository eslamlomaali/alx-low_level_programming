#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
  * _sqrt_recursion - Write a function that returns
  * the natural square root of a number.
  *
  * @n:  input number
  *
  * Return: square root
  */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
  * _sqrt - Calculates square root
  * @n: input number
  * @z: iterate
  *
  * Return: square root
  */

int _sqrt(int n, int z)
{
	int sqrt = z * z;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (z);
	return (_sqrt(n, z + 1));
}

#include "main.h"

/**
  * flip_bits - Write a function that returns the number of bits you would
  * need to flip to get from one number to another.
  *
  * @n: int
  * @m: int
  *
  * Return: flip num
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a = 0, c = 0;

	a = n ^ m;
	while (a)
	{
		if (a & 1)
			c++;

		a >>= 1;
	}

	return (c);
}

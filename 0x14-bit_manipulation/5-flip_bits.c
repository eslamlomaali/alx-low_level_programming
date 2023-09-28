#include "main.h"

/**
  * flip_bits - Write a function that returns the number of bits
  *
  * @x: int
  * @y: int
  *
  * Return: num
  */
unsigned int flip_bits(unsigned long int x, unsigned long int y)
{
	unsigned long int z = 0, a = 0;

	z = x ^ y;
	while (z)
	{
		if (z & 1)
			a++;

		z >>= 1;
	}

	return (a);
}

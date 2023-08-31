#include "main.h"

/**
  * get_bit - Write a function that returns the
  * value of a bit at a given index.
  *
  * @n: The number
  * @index: The index
  *
  * Return: void
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int x = 0;

	while (n)
	{
		if (x == index)
		{
			if (n % 2)
				return (1);
			else
				return (0);
		}

		n = n / 2;
		x++;
	}

	if (index > x && index < 63)
		return (0);

	return (-1);
}

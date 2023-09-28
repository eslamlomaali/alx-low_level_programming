#include "main.h"

/**
  * get_bit - return value of a bit
  *
  * @number: The number
  * @idx: The index
  *
  * Return: void
  */
int get_bit(unsigned long int number, unsigned int idx)
{
	unsigned int x = 0;

	while (number)
	{
		if (x == idx)
		{
			if (number % 2)
				return (1);
			else
				return (0);
		}

		number = number / 2;
		x++;
	}

	if (idx > x && idx < 63)
		return (0);

	return (-1);
}

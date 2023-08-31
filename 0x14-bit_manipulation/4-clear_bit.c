#include "main.h"

/**
  * clear_bit - Write a function that sets the value of
  * a bit to 0 at a given index.
  *
  * @n: The number
  * @index: The index
  *
  * Return: 1 if done, or -1 error
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		*n &= (~(1 << index));
		return (1);
	}

	return (-1);
}

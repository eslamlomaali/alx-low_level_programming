#include "main.h"

/**
  * clear_bit - sets val of a bit
  *
  * @number: The number
  * @idx: The index
  *
  * Return: 1 if success, -1 error
  */
int clear_bit(unsigned long int *number, unsigned int idx)
{
	if (idx < sizeof(unsigned long int) * 8)
	{
		*number &= (~(1 << idx));
		return (1);
	}

	return (-1);
}

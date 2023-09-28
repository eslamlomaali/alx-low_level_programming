#include "main.h"

/**
  * set_bit - set the value of a bit
  *
  * @number: The number
  * @idx: The index
  *
  * Return: 1 success ,-1 if err
  */
int set_bit(unsigned long int *number, unsigned int idx)
{
	if (idx > sizeof(unsigned long int) * 8)
		return (-1);

	return ((*number |= 1 << idx) ? 1 : -1);

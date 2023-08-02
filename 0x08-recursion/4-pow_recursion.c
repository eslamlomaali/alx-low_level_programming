#include "main.h"

/**
  * _pow_recursion - Write a function that returns the value of
  * x raised to the power of y.
  *
  * @a: input  value
  * @b: input times to multiply the value
  *
  * Return: the value
  */
int _pow_recursion(int a, int b)
{
	if (b < 0)
	{
		return (-1);
	}
	else if (b == 1)
	{
		return (a);
	}
	else if (b == 0)
	{
		return (1);
	}
	return(a * _pow_recursion(a, b - 1));
}

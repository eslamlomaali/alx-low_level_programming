#include "main.h"

/**
  * factorial - Write a function that returns the factorial of a given number.
  * @x: input number
  *
  * Return: integer value
  */
int factorial(int x)
{
	if (x < 0)
	{
		return (-1);
	}
	else if (x <= 1)
	{
		return (1);
	}
	return (x * factorial(x - 1));
}

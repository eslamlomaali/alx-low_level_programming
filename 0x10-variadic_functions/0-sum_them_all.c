#include "variadic_functions.h"

/**
  * sum_them_all - Write a function that returns the sum of all its parameters.
  * @n: number of arguments
  *
  * Return: sum
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	int s = 0;

	if (n != 0)
	{
		va_start(ap, n);

		while (i < n)
		{
			s += va_arg(ap, int);
			i++;
		}

		va_end(ap);
		return (s);
	}

	return (0);
}

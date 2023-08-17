#include "variadic_functions.h"

/**
  * print_strings - Write a function that prints strings, followed by new line.
  * @separator: string
  * @n: num of args
  *
  * Return: void
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list va;
	unsigned  int x = 0;
	char *s;

	if (n > 0)
	{
		va_start(va, n);

		while (x < n)
		{
			s = va_arg(va, char *);
			if (s == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", s);

			if (x != n - 1 && separator != NULL)
				printf("%s", separator);

			x++;
		}

		va_end(va);
	}

	printf("\n");
}

#include "variadic_functions.h"

/**
  * print_numbers - Write a function that prints numbers, followed by new line
  * @separator: string
  * @n: number of arguments
  *
  * Return: Nothing
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list va;
	 int x = 0;

	if (n > 0)
	{
		va_start(va, n);

		while (x < n)
		{
			printf("%d", va_arg(va, int));

			if (x != n - 1  && separator != NULL)
				printf("%s", separator);

			x++;
		}
		va_end(va);
	}
	printf("\n");
}

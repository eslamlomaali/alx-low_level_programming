#include "variadic_functions.h"

/**
  * print_all - Write a function that prints anything.
  * @format: format string
  *
  * Return: Nothing
  */
void print_all(const char * const format, ...)
{
	va_list va;
	f_dt form_types[] = {
		{ "c", print_a_char },
		{ "i", print_a_integer },
		{ "f", print_a_float },
		{ "s", print_a_char_ptr }
	};
	unsigned int x = 0;
	unsigned int k = 0;
	char *separator = "";

	va_start(va, format);

	while (format != NULL && format[x])
	{
		k = 0;
		while (k < 4)
		{
			if (format[x] == *form_types[k].identifier)
			{
				form_types[k].f(separator, va);
				separator = ", ";
			}
			k++;
		}
		x++;
	}

	va_end(va);
	printf("\n");
}

/**
  * print_a_char - Prints a char
  * @separator: string separator
  * @va: args  list
  *
  * Return: Nothing
  */
void print_a_char(char *separator, va_list va)
{
	printf("%s%c", separator, va_arg(va, int));
}

/**
  * print_a_integer - Prints int
  * @separator: separator
  * @va: Args list
  *
  * Return: Nothing
  */
void print_a_integer(char *separator, va_list va)
{
	printf("%s%i", separator, va_arg(va, int));
}

/**
  * print_a_float - Prints float
  * @separator: The separator
  * @va: Args list
  *
  * Return: Nothing
  */
void print_a_float(char *separator, va_list va)
{
	printf("%s%f", separator, va_arg(va, double));
}

/**
  * print_a_char_ptr - Prints pointer to char
  * @separator: The separator
  * @va: Args list
  *
  * Return: Nothing
  */
void print_a_char_ptr(char *separator, va_list va)
{
	char *p = va_arg(va, char *);

	if (p == NULL)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}

	printf("%s%s", separator, p);
}

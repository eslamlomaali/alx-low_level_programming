#include "function_pointers.h"

/**
  * print_name - Write a function that prints a name.
  * @name: The string
  * @f: Pointer
  *
  * Return: Nothing
  */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

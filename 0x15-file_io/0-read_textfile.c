#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - read and print file
 * @f: pointer
 * @l: letters
 * Description: function that read and print
 * Return: number
 */

ssize_t read_textfile(const char *f, size_t l)
{
	ssize_t a, b, c;
	char *d;

	d = malloc(l);
	if (d == NULL)
		return (0);

	if (f == NULL)
		return (0);

	a = open(f, O_RDONLY);

	if (a == -1)
	{
		free(d);
		return (0);
	}

	b = read(a, d, l);

	c = write(STDOUT_FILENO, d, b);

	close(a);

	return (c);
}

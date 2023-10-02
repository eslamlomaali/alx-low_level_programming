#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - creates a file.
 * @f: pointer
 * @tc: content
 * Description: creates a file.
 * Return: 1 on success, -1 on fail
 */

int create_file(const char *f, char *tc)
{
	int a = 0, b;

	if (f == NULL)
		return (-1);

	if (tc == NULL)
		tc = "";


	while (tc[a] != '\0')
	{
		a++;
	}

	b = open(f, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (b == -1)
		return (-1);

	write(b, tc, a);

	return (1);
}

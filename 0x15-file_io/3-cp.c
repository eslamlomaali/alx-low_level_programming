#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - copy content
* @ac: number arg
* @av: str arg
* Return: 0
*/

int main(int ac, char *av[])
{
int a, b;
int n1 = 1024, n2 = 0;
char buffer[1024];

if (ac != 3)
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
a = open(av[1], O_RDONLY);
if (a == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
	exit(98);
}
b = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
	| S_IRGRP | S_IWGRP | S_IROTH);
if (b == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
	close(a), exit(99);
}
while (n1 == 1024)
{
	n1 = read(a, buffer, 1024);
	if (n1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	n2 = write(b, buffer, n1);
	if (n2 < n1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
}

if (close(a) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", a), exit(100);

if (close(b) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", b), exit(100);

return (0);
}

#include "main.h"

/**
 * read_textfile - Write a function that reads a text file and prints
 * it to the POSIX standard output.
 *
 * @filename: name of the file
 * @letters: number of letters
 *
 * Return: number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int rtf;
	ssize_t x, w;
	char *b;

	if (filename == NULL)
		return (0);
	rtf = open(filename, O_RDONLY);
	if (rtf == -1)
		return (0);
	b = malloc(sizeof(char) * letters);
	if (b == NULL)
	{
		close(rtf);
		return (0);
	}
	x = read(rtf, b, letters);
	close(rtf);
	if (x == -1)
	{
		free(b);
		return (0);
	}
	w = write(STDOUT_FILENO, b, x);
	free(b);
	if (x != w)
		return (0);
	return (w);
}

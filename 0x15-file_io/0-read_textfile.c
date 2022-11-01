#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * read_textfile - reads textfiles
 * @filename: filename
 * @letters: number of printed letters
 * Return: number of printed letters. if it fails, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int xx;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	xx = open(filename, O_RDONLY);
	if (xx == -1)
		return (0);
	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);
	nrd = read(xx, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);
	close(xx);
	free(buf);
	return (nwr);
}

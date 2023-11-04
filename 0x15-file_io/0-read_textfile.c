#include "main.h"

/**
 *read_textfile - function that reads a text file and print it to the stdout
 *@filename: file name
 *@letters: number of letters
 *
 * Return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fd;
	ssize_t count, written_bytes;
	char *buff;

	if (!filename)
		return (0);

	fd = open(filename, 0_RDONLY);

	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);

	count = read(fd, buff, letters);
	written_bytes = write(1, buff, count);

	close(fd);
	free(buff);
	return (count);
}

#include "main.h"

/**
 *create_file - function that create a file
 *@filename: name of the file
 *@text_content:string
 *
 * Return: 0
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, 0_CREAT | 0_WRONLY | 0_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (i = 0; text_content[i] != '\0'; i++)
	{}

	if (text_content)
	{
		ssize_t written_bytes = write(fd, text_content, i);

		if (written_bytes == -1)
			return (-1);
	}

	close(fd);
	return (1);
}

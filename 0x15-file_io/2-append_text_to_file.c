#include "main.h"

/**
 *append_text_to_file - append text at the end of a file
 *@filename: name of the file
 *@text_content: string
 *
 * Return: 0
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		text_content = "";
		return (-1);
	}

	fd = open(filename, 0_WRONLY | 0_APPEND);

	if (fd == NULL)
		return (-1);

	if (text_content)
	{
		ssize_t permission = write(fd, text_content, strlen(text_content));

		if (permission == -1)
			return (-1);
	}
	close(fd);
	return (1);
}


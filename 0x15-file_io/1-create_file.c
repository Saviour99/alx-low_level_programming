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
	FILE *fptr;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	fptr = open(filename, 0_CREAT | 0_WRONLY | 0_TRUNC, 0600);

	if (fptr == NULL)
		return (-1);
	if (text_content)
	{
		ssize_t written_bytes = write(fptr, text_content, strlen(text_content));
		if (written_bytes == -1)
		{
			close(fptr);
			return (-1);
		}
	}

	close(fptr);
	return (1);
}

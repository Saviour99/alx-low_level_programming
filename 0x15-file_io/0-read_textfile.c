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
	FILE *fptr;

	if (filename == NULL)
		return (0);

	fptr = fopen(filename, "r");

	if (fptr == NULL)
		return (0);

	while (letters > 0)
	{
		int character = fgetc(fptr);

		if (character == EOF)
			break;

		putchar(character);
		letters--;
	}

	fclose(fptr);
	return (letters);
}

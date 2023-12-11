#include <stdio.h>

/**
 *_strlen - find length
 *@s: string
 *Return: string of length
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	return (count);
}

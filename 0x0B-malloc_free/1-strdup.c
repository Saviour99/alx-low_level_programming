#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - print a copy of a string
 *@str: pointer to the string
 *
 *Return: pointer
 */

char *_strdup(char *str)
{
	char *ptr;
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	ptr = malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0 ; i < str[i] ; i++)
		ptr[i] = str[i];
	ptr[i] = '\0';
	return (ptr);
}

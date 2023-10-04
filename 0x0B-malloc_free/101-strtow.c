#include <stdio.h>
#include <stdlib.h>

/**
 *strtow - split a string into words
 *@str: string
 *
 *Return: characters
 */

char **strtow(char *str)
{
	char **ptr;
	int i = 0, words, w, lets, l;

	if (ptr == NULL || ptr[0] == '\0')
		return (NULL);
	if (words == 0)
		return (NULL);
	ptr = malloc(sizeof(char *) * (words + 1));

	if (ptr == NULL)
		return (NULL);
	for (w = 0 ; w < words ; w++)
	{
		while (ptr[i] == ' ')
			i++;
		ptr[w] = malloc(sizeof(char) * (lets + 1));

		if (ptr[w] == NULL)
		{
			for (; w >= 0 ; w--)
				free(ptr[w]);
			free(ptr);
			return (NULL);
		}
		for (l = 0 ; l < lets ; l++)
			ptr[w][l] = str[i++];
		ptr[w][l] = '\0';
	}
	ptr[w] = NULL;
	return (ptr);
}

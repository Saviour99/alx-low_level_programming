#include <stdio.h>
#include <stdlib.h>

/**
 *argstostr - print the concatenation of all argument
 *@ac: argument count
 *@av: argument vector
 *Return: pointer
 */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j, x = 0, y = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] ; j++)
			y++;
	}
	y += ac;

	ptr = malloc(sizeof(char) * y + 1);

	if (ptr == NULL)
		return (NULL);
	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] ; j++)
		{
			ptr[x] = av[i][j];
			x++;
		}
		if (ptr[x] == '\0')
			ptr[x++] = '\n';
	}
	return (ptr);
}

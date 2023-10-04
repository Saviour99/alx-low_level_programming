#include <stdio.h>
#include <stdlib.h>

/**
 *count_word - count numbers
 *@s: string
 *Return: words
 */

int count_word(char *s)
{
	int a, b, c;

	a = 0;
	c = 0;

	for (b = 0; s[b] != '\0' ; b++)
	{
		if (s[b] == ' ')
			a = 0;
		else if (a == 0)
		{
			a = 1;
			c++;
		}
	}
	return (c);
}



/**
 *strtow - split a string into words
 *@str: string
 *
 *Return: characters
 */

char **strtow(char *str)
{
	char **ptr, word;
	int i, j = 0, len = 0, let, x = 0, start, end;

	while (*(str + len))
		len++;
	let = count_word(str);
	if (let == 0)
		return (NULL);

	for (i = 0 ; i <= len ; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (x)
			{
				end = i;
				ptr = malloc(sizeof(char) * (x + 1));
				if (ptr == NULL)
					return (NULL);
				while (start < end)
					**ptr++ = str[start++];
				*ptr = '\0';
				word[j] = ptr - x;
				j++;
				x = 0;
			}
		}
		else if (x++ == 0)
			start = i;
	}
	word[j] == NULL;
	return (word);
}

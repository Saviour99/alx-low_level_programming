#include "main.h"

/**
 *cap_string - string in uppercase
 *@a: pointer
 *Return: char
 */

char *cap_string(char *a)
{
	int i;

	for (i = 0 ; a[i] ; i++)
	{
		int i = 0;

		while (!(a[i] >= 'a' && a[i] <= 'z'))
			i++;
		if (a[i - 1] == ' ' ||
		a[i - 1] == '\t' ||
		a[i - 1] == '\n' ||
		a[i - 1] == ',' ||
		a[i - 1] == '.' ||
		a[i - 1] == ';' ||
		a[i - 1] == ':' ||
		a[i - 1] == '(' ||
		a[i - 1] == ')' ||
		a[i - 1] == '{' ||
		a[i - 1] == '}' ||
		a[i - 1] == '"' ||
		i == 0)
			a[i] -= 32;
	}
	return (a);
}

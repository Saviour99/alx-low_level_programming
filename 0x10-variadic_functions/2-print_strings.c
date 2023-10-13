#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *print_strings - print strings
 *@separator: space between numbers
 *@n: number of argument
 *
 * *Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;

	unsigned int i;
	char *str;

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(string, char *);
		if (str != NULL)
		{
			printf("%s", str);

			if (separator != NULL)
			{
				if (i < (n - 1))
					printf("%s", separator);
			}
		}
		else
			printf("(nil)");
	}

	va_end(string);
	printf("\n");
}

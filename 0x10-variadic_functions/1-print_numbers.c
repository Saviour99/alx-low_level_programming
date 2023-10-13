#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *print_numbers - print numbers
 *@separator: space between numbers
 *@n: number of argument
 *
 * *Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list allnums;
	unsigned int i;
	int r;

	va_start(allnums, n);

	for (i = 0; i < n; i++)
	{
		r = va_arg(allnums, int);
		printf("%d", r);
			
		if (separator != NULL)
		{
			if (i < (n - 1))
				printf("%s", separator);
		}
	}

	va_end(allnums);
	printf("\n");
}

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 *print_all - prints anything
 *@format: type of arguments
 *
 * *Return: 0
 */

void print_all(const char * const format, ...)
{
	va_list anything;
	int i = 0;
	char *st, *separator = "";

	va_start(anything, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(anything, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(anything, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(anything, double));
					break;
				case 's':
					st = va_arg(anything, char *);
					if (st == NULL)
						st = "(nil)";
					printf("%s%s", separator, st);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	va_end(anything);
	printf("\n");
}

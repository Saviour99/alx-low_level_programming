#include <stdarg.h>

/**
 *sum_them_all - returns sum of its parameters
 *@n: number of arguments
 *
 * *Return: Sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sumAll;
	unsigned int i;
	unsigned int result = 0;


	va_start(sumAll, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
			return (0);
		result += va_arg(sumAll, unsigned int);
	}

	va_end(sumAll);
	return (result);
}

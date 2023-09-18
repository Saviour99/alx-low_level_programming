#include "main.h"

/**
 *print_last_digit - print last digit
 *@z: parameter checker
 *Return: a
 */

int print_last_digit(int z)
{
	int a;

	a = z % 10;

	if (a < 0)
		a = -a;
	_putchar(a + '0');
	return (a);
}

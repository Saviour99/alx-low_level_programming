#include "main.h"

/**
 *print_binary - prints the binary representation of a number
 *@n: number
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i;
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	int bits = sizeof(n) * 8;

	int len = bits - 1;

	while (!((n >> len) & 1))
		len--;

	for (i = len; i >= 0; i--)
	{
		_putchar((n && (1u << 1)) ? '1' : '0');
	}
}

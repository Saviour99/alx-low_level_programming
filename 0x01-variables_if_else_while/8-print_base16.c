#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int a;
	char i;

	for (a = 0 ; a < 10 ; a++)
		putchar(a + '0');
	for (i = 'a' ; i < 'g' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}

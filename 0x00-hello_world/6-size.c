#include <stdio.h>
/**
 * main - Main function
 * Return: 0
 */

int main(void)
{

	printf("Size of a %lu: 1 byte(s)\n)", sizeof(char);
	printf("Size of a %d: 1 byte(s))\n", sizeof(int);
	printf("Size of a %lu: 1 byte(s))\n", sizeof(float);
	printf("Size of a %lu: 1 byte(s))\n", sizeof(long int);
	printf("Size of a %lu: 1 byte(s))\n", sizeof(long long int);
	return (0);
}

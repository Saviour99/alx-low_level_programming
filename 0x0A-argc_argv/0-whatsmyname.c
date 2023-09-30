#include "main.h"
#include <stdio.h>

/**
 *main - print the name of a program
 *@argc: argument count
 *@argv: argument array
 *Return: name
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}

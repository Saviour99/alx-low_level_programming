#include "main.h"
#include <stdio.h>

/**
 *main - print the number of argument
 *@argc: argument count
 *@argv: argument array
 *Return: name
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}


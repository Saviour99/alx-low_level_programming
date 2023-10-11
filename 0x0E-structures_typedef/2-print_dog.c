#include <stdio.h>
#include "dog.h"

/**
 *print_dog - print a struct dog
 *@d: pointer
 *
 *Return: 0
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		if (d->age == 0)
			printf("age: 0\n");
		else
			printf("age: %f\n", d->age);

		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}

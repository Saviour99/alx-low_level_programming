#include <stdio.h>
#include <stdlib.h>
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
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("age: %f\n", d->age ? d->age : 0);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
	else
		return;
}

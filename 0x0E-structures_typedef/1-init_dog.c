#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *init_dog - Function
 *@d: pointer
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of the dog
 *
 *Return: pointer
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		(*d).age = age;
		d->owner = owner;
	}
}

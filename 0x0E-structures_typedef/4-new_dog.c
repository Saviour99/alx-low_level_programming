#include <stdio.h>
#include "dog.h"

/**
 *new_dog - create a new dog
 *@name: First member
 *@age: Second member
 *@owner: Third member
 *
 *Description: longer description
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct new_dog
	{
		char *name;
		float age;
		char *owner;
	};

	struct new_dog newDog;

	newDog.name = name;
	newDog.age = age;
	newDog.owner = owner;
}

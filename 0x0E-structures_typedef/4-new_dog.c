#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - print the length of a string
 * @s: string
 *
 * Return: length
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{}
	return (len);
}

/**
 * _strcpy - copies the string pointed to by src
 * @dest: copy the string
 * @src: string to be copied
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	for (len = 0; src[len] != '\0'; len++)
	{}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 *new_dog - create a new dog
 *@name: First member
 *@age: Second member
 *@owner: Third member
 *
 *Description: longer description
 *Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);

	ndog->name = malloc(sizeof(char) * (len1 + 1));
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	ndog->owner = malloc(sizeof(char) * (len2 + 1));
	if (ndog->owner == NULL)
	{
		free(ndog);
		free(ndog->name);
		return (NULL);
	}
	_strcpy(ndog->name, name);
	_strcpy(ndog->owner, owner);
	ndog->age = age;

	return (ndog);
}

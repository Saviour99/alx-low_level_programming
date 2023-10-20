#include "lists.h"

/**
 *add_node - add new node at the beginning
 *@str: string
 *@head: pointer
 *
 *Return: address
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int i, num = 0;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (i = 0; str[i] != '\0'; i++)
		num++;

	new->len = num;
	new->next = *head;
	*head = new;

	return (*head);

}

#include "lists.h"

/**
 *print_dlistint - print all element of the doubly linked list
 *@h: head of the list
 *
 * Return: addess of the head pointer
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node = 0;

	if (h == NULL)
		return (node);

	while (h != NULL)
	{
		node++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node);
}

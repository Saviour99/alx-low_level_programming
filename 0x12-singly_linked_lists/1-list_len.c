#include "lists.h"

/**
 *list_len - return the number of linked list
 *@h: name of struct
 *
 *Return: lenght
 */

size_t list_len(const list_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}

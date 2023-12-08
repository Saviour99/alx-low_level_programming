#include "lists.h"

/**
 *dlistint_len - return the number of elements in a linked dlistint_t list
 *@h: head of the list
 *
 *Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t elm = 0;

	if (h == NULL)
		return (1);

	while (h != NULL)
	{
		elm++;
		h = h->next;
	}
	return (elm);
}

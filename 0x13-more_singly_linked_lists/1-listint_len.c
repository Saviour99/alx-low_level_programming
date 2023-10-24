#include "lists.h"

/**
 *listint_len - print the number of nodes
 *@h: head
 *
 *Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	int count = 0;

	temp = h;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}

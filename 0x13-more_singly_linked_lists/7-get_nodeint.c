#include "lists.h"

/**
 *get_nodeint_at_index - return the nth node of a list
 *@head: pointer to the first node of the list
 *@index: number of times
 *
 * Return: address
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	for (x = 0; x < index; x++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}

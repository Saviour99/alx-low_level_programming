#include "lists.h"

/**
 *get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 *@head:head of the list
 *@index: position of the list
 *
 *Return: pinter
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int pos;
	dlistint_t *temp;

	pos = 0;
	if (head == NULL)
	return (NULL);

	temp = head;
	while (temp)
	{
		if (index == pos)
			return (temp);
		pos++;
		temp = temp->next;
	}
	return (NULL);
}

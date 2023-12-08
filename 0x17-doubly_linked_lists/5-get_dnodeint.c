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
	dlistint_t *temp = NULL;

	temp = head;
	while (index != 1)
	{
		temp = temp->next;
		index--;
	}
	return (temp->next);
}

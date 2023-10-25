#include "lists.h"

/**
 *insert_nodeint_at_index - insert a node at any given postion
 *@head: pointer to the fist node of a list
 *@n: data of the node to be inserted
 *@idx: position to insert the new node
 *
 * Return: address
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *current;

	current = malloc(sizeof(listint_t));
	if (current == NULL)
		return (NULL);
	current->n = n;
	current->next = NULL;

	temp = *head;
	if (idx)
	{
		while (idx != 1)
		{
			temp = temp->next;
			idx--;
		}
		current->next = temp->next;
		temp->next = current;
		return (current);
	}
	else
		return (NULL);
}

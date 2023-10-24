#include "lists.h"

/**
 *add_nodeint_end - add a new node at the end
 *@head: head of a node
 *@n: data of the node
 *
 * Return: address
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *current;

	current = malloc(sizeof(listint_t));
	if (current == NULL)
		return (NULL);
	current->n = n;
	current->next = NULL;
	if (*head == NULL)
	{
		*head = current;
		return (current);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = current;
	return (current);
}

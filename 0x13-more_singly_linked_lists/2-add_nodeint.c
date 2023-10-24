#include "lists.h"

/**
 *add_nodeint - add at the beginning of a node
 *@head: head of the linked list
 *@n: data
 *
 * Return: address
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp, *current;

	current = malloc(sizeof(listint_t));
	current->n = n;
	current->next = NULL;

	current->next = *head;
	*head = current;

	if (*head)
	{
		temp = *head;
		while (temp != NULL)
			temp = temp->next;
		return (*head);
	}
	else
		return (NULL);
}

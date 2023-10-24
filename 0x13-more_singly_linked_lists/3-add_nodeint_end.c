#include "lists.h"

/**
 *add_nodeint_end - add a new node at the beginning
 *@head: head of a node
 *@n: data of the node
 *
 * Return: address
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *current;

	current = malloc(sizeof(listint_t));
	current->n = n;
	current->next = NULL;

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = current;
	return (current->next);
}

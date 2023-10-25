#include "lists.h"

/**
 *delete_nodeint_at_index - deletes a node ata given index of the list
 *@head: pointer to the first node of the list
 *@index: position of the node to be deleted
 *
 *Return: 1 if success and -1 if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = *head, *current = *head;

	if (head == NULL || *head == NULL)
		return (-1);
	else if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
		return (1);
	}
	else
	{
		while (index != 0)
		{
			prev = current;
			current = current->next;
			index--;
		}
		prev->next = current->next;
		free(current);
		current = NULL;
		return (1);
	}
}

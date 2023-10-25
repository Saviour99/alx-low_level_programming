#include "lists.h"


/**
 *free_listint - frees a list
 *@head: head of the node
 *
 *Return: 0
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		head = head->next;
		free(temp);
	}
}

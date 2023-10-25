#include "lists.h"

/**
 *pop_listint - deletes the head node
 *@head: pointer to the first node
 *
 *Return: 1
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (head == NULL)
		return (0);

	num = (*head)->n;

	temp = *head;
	*head = (*head)->next;
	free(temp);
	temp = NULL;
	return (num);
}

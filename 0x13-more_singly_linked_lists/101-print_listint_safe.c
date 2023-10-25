#include "lists.h"

/**
 *free_listint_t - frees a list
 *@head: head
 *
 *Return: 0
 */

void free_listint_t(listint_t **head)
{
	listint_t *prev;
	listint_t *current;

	if (*head != NULL)
	{
		current = *head;
		prev = current;
		while (prev != NULL)
		{
			current = current->next;
			free(prev);
		}
		*head = NULL;
	}
}


/**
 *print_listint_safe - prints a linked list
 *@head: pointer to the first node of the list
 *
 *Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp, *prev, *curr, *add;
	size_t count = 0;

	temp = NULL;
	while (head != NULL)
	{
		curr = malloc(sizeof(listint_t));

		if (curr == NULL)
			exit(98);
		curr->n = (void *)head;
		curr->next = temp;
		temp = curr;

		add = temp;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->n)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listint_t(&temp);
				return (count);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head= head->next;
		count++;
	}
	free_listint_t(&temp);
	return (count);
}

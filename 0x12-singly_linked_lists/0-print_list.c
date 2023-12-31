#include "lists.h"

/**
 *print_list - print elements in a list
 *@h: list name
 *
 *Return: struct
 */

size_t print_list(const list_t *h)
{
	int nodes;

	nodes = 0;
	while (h)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nodes++;
	}
	return (nodes);
}

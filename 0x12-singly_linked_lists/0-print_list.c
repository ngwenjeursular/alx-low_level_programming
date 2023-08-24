#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to list_t
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes_nums = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u]%s\n", h->len, h->str);

		h = h->next;
		nodes_nums++;
	}
	return (nodes_nums);
}

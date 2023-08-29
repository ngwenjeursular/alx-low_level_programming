#include "lists.h"

/**
 * print_listint - prints elements of a linked list
 * @h: header pointer
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t elems = 0;

	while (h)
	{
		printf("%d\n", h->n);
		elems++;
		h = h->next;
	}

	return (elems);
}

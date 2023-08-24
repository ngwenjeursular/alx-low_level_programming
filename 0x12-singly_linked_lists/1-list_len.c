#include "lists.h"
#include <stdlib.h>

/**
 * list_len - returns number of elements in a linked list
 * @h: pointer to list_t list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t num_elements = 0;

	while (h)
	{
		num_elements++;
		h = h->next;
	}
	return (num_elements);
}

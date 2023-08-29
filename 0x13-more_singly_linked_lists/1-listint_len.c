#include "lists.h"

/**
 * listint_len - returns number of elements in a linked lists
 * @h: pointer linked list of type listint_t to traverse
 *
 * Return: total nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t elems = 0;

	while (h)
	{
		elems++;
		h = h->next;
	}

	return (elems);
}

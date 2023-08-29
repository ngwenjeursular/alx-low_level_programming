#include "lists.h"

/**
 * pop_listint - deletes head node of a linked list
 * @head: pointer to the first pointer
 *
 * Return: the data inside the elements deleted
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tempo;
	int elems;

	if (!head || !*head)
		return (0);

	elems = (*head)->n;
	tempo = (*head)->next;
	free(*head);
	*head = tempo;

	return (elems);
}

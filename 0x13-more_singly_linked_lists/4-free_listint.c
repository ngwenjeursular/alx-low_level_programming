#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *tempo;

	while (head)
	{
		tempo = head->next;
		free(head);
		head = tempo;
	}
}

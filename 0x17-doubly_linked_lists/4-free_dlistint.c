#include "lists.h"

/**
 * free_dlistint - a function that frees a doubly linked list
 * @head: a pointer to the first node of the doubly linked list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	/* if list contains only one node */
	if (head->prev == NULL && head->next == NULL)
	{
		free(head);
		return;
	}

	/* go to the beginning of the list */
	while (head->prev != NULL)
		head = head->prev;

	/* clear the list */
	while (head->next != NULL)
	{
		head = head->next;
		if (head->prev != NULL)
			free(head->prev);
	}
	free(head);

}

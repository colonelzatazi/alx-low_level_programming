#include "lists.h"

/**
 * *add_dnodeint_end - a  function that adds a new node at the end of a
 * dlistint_t list.
 * @head: the address of a pointer to the first node of the list
 * @n: the data to add at the end of the linked list
 * Return: the address of the new node (ON SUCCESS), retrns NULL (ON FAILURE)
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *new;

	/* create new node */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	new->next = NULL;

	/* assign new node to head if head is NULL */
	if (head == NULL || *head == NULL)
	{
		*head = new;
		return (new);
	}

	/* adds node at the end */
	ptr = *head;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	new->prev = ptr;
	ptr->next = new;

	return (new);
}

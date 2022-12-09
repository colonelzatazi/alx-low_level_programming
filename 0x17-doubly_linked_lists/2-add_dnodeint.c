#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node at the beginning of a
 *                 dlistint_t list.
 * @head: the address of a pointer to the first node of the list
 * @n: the data to add at the begining of the list
 * Return: returns the address of the new element (SUCCESS) of NULL (FAILURE)
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *new;

	/* create a new node */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	new->next = NULL;

	/* if head is NULL assigns the new node to head */
	if (head == NULL || *head == NULL)
	{
		*head = new;
		return (new);
	}

	/* if head is not NULL goes to the begining of the list */
	if (head != NULL && *head != NULL)
	{
		ptr = *head;
		while (ptr->prev != NULL)
			ptr = ptr->prev;
	}

	/* places node at the begining of the list */
	new->next = ptr;
	ptr->prev = new;

	return (new);
}

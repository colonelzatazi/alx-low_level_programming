#include "lists.h"

/**
 * node - a function that creates a new dlistint_t node
 * @n: the data node will contain
 * Return: returns a pointer to the newly allocated space in memory
 */
dlistint_t *node(int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	new->next = NULL;

	return (new);
}

/**
 * insert_at_end - a function that inserts a node at the end of a list
 * @h: a pointer to the first item on the list
 * @new: the new node
 * Return: a pointer to the new node
 */
dlistint_t *insert_at_end(dlistint_t **h, dlistint_t *new)
{
	dlistint_t *ptr = *h;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new;
	new->prev = ptr;
	new->next = NULL;
	return (new);
}

/**
 * insrt_in_list - inserts a new node 'new' in a given position 'idx', in a list
 * @h: the address of a pointer to the first node of the dlistint_t list
 * @new: the new node
 * @idx: the index at which to insert
 * Return: a pointer to the new node
 */
dlistint_t *insrt_in_list(dlistint_t **h, dlistint_t *new, unsigned int idx)
{
	dlistint_t *ptr = *h;

	while (--idx)
		ptr = ptr->next;
	new->next = ptr->next;
	new->prev = ptr;
	ptr->next->prev = new;
	ptr->next = new;

	return (new);
}

/**
 * insert_dnodeint_at_index - a function that inserts a new node at a given
 *                            position.
 * @h: the address of a pointer to the first node of the list
 * @idx: idx is the index of the list where the new node should be added.
 *       Index starts at 0
 * @n: the data to be inserted
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr, *new;
	unsigned int count = 0;

	if ((h == NULL || *h == NULL) && idx > 0)
		return (NULL);

	/* create new node */
	new = node(n);

	/* assign new to h if h == NULL (i.e. creates a new list) */
	if ((h == NULL || *h == NULL) && idx == 0)
	{
		*h = new;
		return (new);
	}

	/* go to the begining of the list */
	while ((*h)->prev != NULL)
		*h = (*h)->prev;

	/* assigns new to index 0 if list contains only one node */
	if ((*h)->prev == NULL && idx == 0)
	{
		new->next = *h;
		(*h)->prev = new;
		return (new);
	}

	/* get number of nodes in the list */
	ptr = *h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	/* check if idx > count */
	if (idx > count)
	{
		free(new);
		return (NULL);
	}

	/* insert node at index at the end */
	if (idx == count)
	{
		new = insert_at_end(h, new);
		return (new);
	}

	/* insert node at index within the list */
	new = insrt_in_list(h, new, idx);
	return (new);
}

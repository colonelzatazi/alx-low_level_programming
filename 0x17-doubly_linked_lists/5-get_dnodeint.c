#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node of a
 *                         dlistint_t linked list.
 * @head: a pointer to the first node of the doubly linked list
 * @index: the index of the item you want to get (index starts from 0)
 * Return: returns the data stored at that index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = NULL;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	/* go to beginning of list */
	while (head->prev != NULL)
		head = head->prev;

	/* get number of items in the list */
	ptr = head;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	/* check if index is greater than number of item in the list */
	if (index >= count)
		return (NULL);

	/* fetch the value at the index */
	ptr = head;
	while (index--)
	{
		ptr = ptr->next;
	}
	return (ptr);
}

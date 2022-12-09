#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all the data (n) of a
 *                dlistint_t linked list.
 * @head: a pointer to the first node of the list
 * Return: returns the sum of all the nodes in the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	/* goto the beginning of the list */
	while (head->prev != NULL)
		head = head->prev;

	/* sum up all the nodes */
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}

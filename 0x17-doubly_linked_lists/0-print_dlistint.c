#include "lists.h"

/**
 * print_dlistint -  a function that prints all the elements of a dlistint_t
 *                   list.
 * @h: a pointer to the first node of the list
 * Return: returns the number of nodes printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (0);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}

	return (n);
}

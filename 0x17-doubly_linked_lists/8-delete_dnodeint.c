#include "lists.h"

/**
 * del_at_0 - a function that deletes node at index 0
 * @head: a double pointer to the first node (node at index 0)
 * Return: always 1
 */
int del_at_0(dlistint_t **head)
{
	if ((*head)->prev == NULL && (*head)->next == NULL)
	{
		free(*head);
		*head = NULL;
		return (1);
	}
	(*head) = (*head)->next;
	free((*head)->prev);
	(*head)->prev = NULL;
	return (1);
}

/**
 * del_at_last - a mini-function that deletes the last node of the list
 * @ptr: a pointer to the particular node to be deleted (last node)
 * Return: always 1
 */
int del_at_last(dlistint_t *ptr)
{
	ptr = ptr->prev;
	free(ptr->next);
	ptr->next = NULL;
	return (1);
}

/**
 * del_in_between - a function that deletes a node in between two other nodes
 * @ptr: a pointer to the particular node to be deleted
 * Return: always 1
 */
int del_in_between(dlistint_t *ptr)
{
	ptr->prev->next = ptr->next;
	ptr->next->prev = ptr->prev;
	free(ptr);
	ptr = NULL;
	return (1);
}

/**
 * delete_dnodeint_at_index -  a function that deletes the node at index index
 * of a dlistint_t linked list.
 * @head: the address of a pointer to the first node of the double linked list
 * @index: the index of the node that should be deleted (index starts at 0)
 * Return: returns 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = NULL;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	/* got to the begining of the list */
	while ((*head)->prev != NULL)
		*head = (*head)->prev;
	/* count nodes */
	ptr = *head;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	/* check if index is out of range */
	if (index >= count)
		return (-1);

	/* --------- delete node at index ----------- */
	/* 1. if this is first node */
	if (index == 0)
		return (del_at_0(head));

	ptr = *head;
	while (index--)
		ptr = ptr->next;
	/* 2. if this is last node */
	if (ptr->next == NULL)
		return (del_at_last(ptr));

	/* 3. if this is any node in between */
	else if (ptr->prev != NULL && ptr->next != NULL)
		return (del_in_between(ptr));

	return (-1);
}

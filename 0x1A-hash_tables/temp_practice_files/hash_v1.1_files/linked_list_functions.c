#include "hash.h"

/**
 * allocate_list - a function that allocates memory for a linked list
 * Return: returns a pointer to the allocated memory
 */
LinkedList *allocate_list(void)
{
	LinkedList *new;

	new = malloc(sizeof(LinkedList));

	return (new);
}

/**
 * linkedlist_insert - a function that inserts an item into a linked list
 * @list: the linked list
 * @item: the item to be inserted
 * Return: returns a pointer to 
 */
LinkedList *linkedlist_insert(LinkedList *head, Ht_item *item)
{
	LinkedList *temp;

	/* create new linked list node */
	temp->item = malloc(sizeof(Ht_item));
	temp->next = NULL

	/* create new linked list if this is the first overflow */
	/* element of the hash table */
	if (head == NULL)
	{
		head = allocate_list();
		head = temp;
		return;
	}
	if (head->next == NULL)
	{
		
	}

	
}

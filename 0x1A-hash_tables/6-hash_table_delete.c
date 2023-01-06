#include "hash_tables.h"

/**
 * free_array_item_content - a function that frees the item of a hash
 *                           table array
 * @item: a linked list containing collided items
 * Return: void
 */
void free_array_item_content(hash_node_t **item)
{
	hash_node_t *temp, *ptr;

	if (*item == NULL)
		return;

	/* Case 1: no collision */
	if ((*item)->next == NULL)
	{
		free(*item);
		return;
	}

	/* Case 2: collision */
	ptr = *item;
	while (ptr != NULL)
	{
		temp = ptr;
		ptr = ptr->next;
		free(temp);
	}
}
/**
 * hash_table_delete - a function that deletes a hash table
 * @ht: the hash table to be deleted
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long i;

	if (ht == NULL)
		return;

	if (ht->array == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			free_array_item_content(&(ht->array[i]));
			ht->array[i] = NULL;
		}
	}
	free(ht->array);
	free(ht);
}

#include "hash.h"

/**
 * free_item - a function that frees a hash table item
 * @item: a pointer to the hash table item to be freed
 * Return: void
 */
void free_item(Ht_item *item)
{
	if (item != NULL)
	{
		free(item->key);
		free(item->value);
		free(item);
	}
}

/**
 * free_table - a function that free's a hash table
 * @table: a pointer to a hash table
 * Return: void
 */
void free_table(HashTable *table)
{
	int i;

	if (table == NULL)
		return;

	for (i = 0; i < table->size; i++)
	{
		if (table->items[i] != NULL)
			free_item(table->items[i]);
	}
	free(table->items);
	free(table);
}

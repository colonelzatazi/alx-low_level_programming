#include "hash.h"

/**
 * ht_search - a function that returns the value stored in a key
 * @table: the hash table to be searched
 * @key: the key to search for
 * Return: returns the value stored in `key` (ON SUCCESS), NULL (ON FAILURE)
 */
char *ht_search(HashTable *table, char *key)
{
	int index;

	if (table == NULL)
		return (NULL);

	index = hash_function(key);

	if (table->items[index] != NULL)
	{
		if (strcmp(table->items[index]->key, key) == 0)
			return (table->items[index]->value);
	}

	return (NULL);
}

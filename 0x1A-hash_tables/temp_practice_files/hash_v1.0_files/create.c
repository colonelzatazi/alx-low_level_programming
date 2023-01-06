#include "hash.h"

/**
 * create_item - a function that creates a new hash table item
 * @key: the key to use for retreiving the value
 * @value: the value to be stored
 * Return: returns a pointer to the new hash table item
 */
Ht_item *create_item(char *key, char *value)
{
	Ht_item *new_item;

	new_item = malloc(sizeof(Ht_item));

	new_item->key = malloc(strlen(key) + 1);
	new_item->value = malloc(strlen(value) + 1);

	strcpy(new_item->key, key);
	strcpy(new_item->value, value);

	return (new_item);
}


/**
 * create_table - creates a new hash table
 * @size: the number of elements expected
 * Return: a pointer to the newly created hash table
 */
HashTable *create_table(int size)
{
	HashTable *table;
	int i;

	table = malloc(sizeof(HashTable));
	table->items = calloc(size, sizeof(Ht_item));

	table->size = size;
	table->count = 0;

	/* initialize all the items of the array with NULL */
	for (i = 0; i < table->size; i++)
		table->items[i] = NULL;

	return (table);
}

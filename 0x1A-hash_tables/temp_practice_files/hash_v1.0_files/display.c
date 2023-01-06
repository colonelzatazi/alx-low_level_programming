#include "hash.h"

/**
 * print_search - a function that prints the return value of ht_search
 * @table: a hash table
 * @key: the key to search for
 * Return: void
 */
void print_search(HashTable *table, char *key)
{
	char *val;

	if (table == NULL)
	{
		printf("hash table is empty\n");
		return;
	}

	val = ht_search(table, key);
	if (val == NULL)
	{
		printf("Key: %s does not exist\n", key);
		return;
	}
	else
		printf("Key: %s, Value: %s\n", key, val);
}


/**
 * print_table - a function that prints a hash table
 * @table: the table to print
 * Return: void
 */
void print_table(HashTable *table)
{
	int i;

	printf("\nHash Table\n----------------------------\n");
	if (table == NULL)
	{
		printf("Hash table is empty!\n");
		return;
	}

	for (i = 0; i < table->size; i++)
	{
		if (table->items[i] != NULL)
		{
			printf("Index: %d, Key: %s, Value: %s\n",
			      i, table->items[i]->key,
			       table->items[i]->value);
		}
	}
	printf("----------------------------\n");
}

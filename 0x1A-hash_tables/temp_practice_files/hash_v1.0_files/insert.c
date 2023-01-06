#include "hash.h"

/**
 * ht_insert - creates and inserts a new hash table item into a hash table
 * @table: the hash table
 * @key: the key
 * @value: the value to he inserted
 * Return: void
 */
void ht_insert(HashTable *table, char *key, char *value)
{
	Ht_item *new_item;
	unsigned long index;

	new_item = create_item(key, value);
	/**
	  Add your own code here to create new table if table is NULL
	  Example:
	  if (table == NULL)
	  {
	  table = create_table(<your_desired_size_here>);
	  }
	 */
	index = hash_function(key);
	if (table->items[index] == NULL)   /* key doesn't exist */
	{
		if (table->count == table->size)  /* array is full */
		{
			printf("Insert Error: Hash Table is full!\n");
			free(new_item);
			return;
		}
		/* insert new_item */
		table->items[index] = new_item;
		table->count++;
	}
	else
	{
		/* Scenario 1 */
		/* if the two keys are the same simply update the value */
		if (strcmp(table->items[index]->key, key) == 0)
		{
			strcpy(table->items[index]->value, value);
			return;
		}
		/* Scenario 2: if collision occured */
		handle_collision(table, index, new_item);
		return;
	}
}

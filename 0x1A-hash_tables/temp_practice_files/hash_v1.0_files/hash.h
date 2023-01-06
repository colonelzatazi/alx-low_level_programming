#ifndef HASH_H
#define HASH_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define CAPACITY 50000   /* SIZE OF HASH TABLE */

/**
 * struct Ht_item - a hash table item structure (`key:value` pair)
 * @key: the key
 * @value: the value stored in the key
 */
typedef struct Ht_item
{
	char *key;
	char *value;
} Ht_item;

/**
 * struct HashTable - a hash table structure
 * @items: array of pointers to Ht_items structure
 * @size: the fixed size of the hash table
 * @count: current number of elements in the hash table
 */
typedef struct HashTable
{
	Ht_item **items;
	int size;
	int count;
} HashTable;


Ht_item *create_item(char *key, char *value);
HashTable* create_table(int size);
unsigned long hash_function(char *str);
void free_item(Ht_item *item);
void free_table(HashTable *table);
char* ht_search(HashTable* table, char* key);
void ht_insert(HashTable* table, char* key, char* value);
void print_search(HashTable *table, char *key);
void print_table(HashTable* table);
void handle_collision(HashTable* table, unsigned long index, Ht_item* item);


#endif /* HASH_H */

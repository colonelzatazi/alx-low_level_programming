#ifndef HASH_H
#define HASH_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CAPACITY 50000

/**
 * struct Ht_item - a hash table item structure
 * @key: the key
 * @value: the value
 */
typedef struct Ht_item
{
	char *key;
	char *value;
} Ht_item;

/**
 * struct HashTable - a hash table structure
 * @items: an array of pointers to Ht_items
 * @size: the size of the hash table
 * @count: the number of initialized items in the hash table
 */
typedef struct HashTable
{
	Ht_item **items;
	int size;
	int count;
} HashTable;

/**
 * struct LinkedList - a linked list containing overflow of hash table items
 * @items: the data of the current node
 * @next: a pointer to the next node of the lnked list
 */
typedef struct LinkedList
{
	Ht_item *item;
	LinkedList *next;
} LinkedList;

#endif /* HASH_H */

#include "hash.h"

/**
 * hash_function - a function that computes the index of a key `str` based
 *                 on the ascii values of each character of the string `str`
 * @str: the key to be converted
 * Return: returns the index of a hash table
 */
unsigned long hash_function(char *str)
{
	unsigned long i = 0, idx;
	int j = 0;

	for (j = 0; str[j]; j++)
		i += str[j];

	idx = i % CAPACITY;

	return (idx);
}

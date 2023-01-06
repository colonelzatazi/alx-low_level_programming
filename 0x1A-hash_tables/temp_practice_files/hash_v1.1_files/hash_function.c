#include "hash.h"

/**
 * hash_function - a function that calculates the index of a hash key `str`
 * based on the sum of the ascii value of each character of the key `str`
 * @key: the string whose index is to be obtained
 * Return: returns the index `idx`
 */
unsigned long hash_function(char *str)
{
	unsigned long i, idx;
	int j;

	for (i = 0; str[j]; j++)
		i += str[j];

	idx = i % CAPACITY;

	return (idx);
}

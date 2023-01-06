#include "hash.h"

/**
 * main - the entry point of the program
 * Return: always 0 (SUCCESS)
 */
int main(void)
{
	HashTable *ht;

	ht = create_table(CAPACITY);

	ht_insert(ht, "1", "First address");
	ht_insert(ht, "2", "Second address");

	print_search(ht, "1");
	print_search(ht, "2");
	print_search(ht, "3");

	print_table(ht);

	free_table(ht);

	return (0);
}

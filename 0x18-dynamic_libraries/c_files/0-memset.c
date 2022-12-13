#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: a pointer to the string to be replaced
 * @b: the character that will replace the one in the string
 * @n: the amount of bytes to be replaced.
 * Return: returns a pointer to the memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}

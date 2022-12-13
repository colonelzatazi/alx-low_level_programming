#include <stdio.h>

/**
 * _memcpy - a function that copies a memory area
 * @dest: the destination buffer
 * @src: the source buffer
 * @n: area size
 * Return: returns a pointer to the destination string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}

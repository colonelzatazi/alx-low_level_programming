#include "main.h"

/**
 * _strcat - appends src to dest string
 * @dest: string that src will be appended on
 * @src: string to append on dest
 * Return: address of dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	for (j = 0; dest[j] != '\0'; j++)
		;
	while (src[i] != '\0')
	{
		dest[j + i] = src[i];
		i++;
	}
	return (dest);
}

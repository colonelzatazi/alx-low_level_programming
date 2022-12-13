#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: a pointer to the string to be searched
 * @needle: a pointer to the substring to be searched for
 * Return: returns a pointer to the beginning of the
 * located substring, or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j = 0, k;

	for (i = 0; haystack[i] != 0; i++)
	{
		k = i;
		j = 0;
		for (; needle[j] != 0; )
		{
			if (haystack[k++] == needle[j++])
			{
				continue;
			}
			break;
		}
		if (needle[j] == '\0')
			return ((haystack + i));
	}
	return (NULL);
}

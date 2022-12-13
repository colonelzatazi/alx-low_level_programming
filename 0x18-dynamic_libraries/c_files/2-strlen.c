#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: the only argument (pointer to the string)
 * Return: returns the length of the string
 */
int _strlen(char *s)
{
	int i;
	int c = 0;

	for (i = 0; 1 ; i++)
	{
		if (*(s + i) == 0)
			break;
		c++;
	}
	return (c);
}

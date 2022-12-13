#include "main.h"

/**
 * _puts - a function that prints a string followed by a new line.
 * @str: a pointer to the string to be printed
 * Return: nothing
 */
void _puts(char *str)
{
	int i;

	for (i = 0; 1 ; i++)
	{
		if (*(str + i) == 0)
		{
			printf("\n");
			break;
		}
		printf("%c", *(str + i));
	}
}

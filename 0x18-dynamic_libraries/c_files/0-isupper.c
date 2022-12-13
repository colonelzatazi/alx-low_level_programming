#include "main.h"

/**
 * _isupper - checks for upper case character
 * @c: argument to be evaluated
 * Return: Returns 1 if capital and 0 if otherwise.
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}

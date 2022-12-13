#include"main.h"

/**
 * _isalpha - checks for alphabetical character
 * @c: ASCII value will be checked for each character.
 *Return: returns 1 if it is a letter and 0 if otherwise
 */
int _isalpha(int c)
{
	if (((c > 64) && (c < 91)) || ((c > 96) && (c < 123)))
		return (1);
	else
		return (0);
}

#include "main.h"

/**
 * _isupper - Checks for uppercase characters
 * @c: Is the variable
 *
 * Return: 1 if if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}

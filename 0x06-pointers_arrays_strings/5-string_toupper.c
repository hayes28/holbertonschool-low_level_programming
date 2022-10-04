#include "holberton.h"

/**
 * string_toupper - function that changes all lowercase letters
 * of a string to uppercase.
 * @p: pointer to change
 *
 * Return: upper case letters
 */
char *string_toupper(char *p)
{
	int i = 0;

	while (p[i] != '\0')
	{
		if (p[i] != 'a' && p[i] <= 'z')
			p[i] = p[i] - 32;

		i++;
	}
	return (p);
}

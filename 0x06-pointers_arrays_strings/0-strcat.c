#include "holberton.h"

/**
 * _strcat - Function that concatenates two strings.
 * @src: source string
 * @dest: destination string
 *
 * Return: Pointer to resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int d, s;

	d = 0;

	while (dest[d])
		d++;

	for (s = 0; src[s] != '\0'; s++)
	{
		dest[d + s] = src[s];
	}

	return (dest);
}

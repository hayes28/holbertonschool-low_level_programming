#include "holberton.h"

/**
 * _strncat - function that concatenates two strings.
 * @src: Source string
 * @dest: Destination string
 * @n: variable integer
 *
 * Return: Pointer to resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int s, d;

	for (s = 0; dest[s] != '\0'; s++)

	for (d = 0; d < n && src[d] != '\0'; d++)
	{
		dest[s + d] = src[d];
	}

	return (dest);
}

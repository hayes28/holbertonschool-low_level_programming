#include "main.h"
#include "stddef.h"
/**
 * binary_to_uint - function that converts a binary
 * number to an unsigned int.
 * @b: pointer to a string
 *
 * Return: converted number, 0 if one or more chars in
 * string 'b' that isn't 0 or 1 'b' is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0, base = 1;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		i++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			val += base;
		base = base * 2;
	}
	return (val);
}

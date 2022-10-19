#include "main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: number of member elements
 * @size: size of each member
 *
 * Return: pointer to the memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	arr = malloc(nmemb * size);

	if (arr == 0)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb * size; i++)
	{
		arr[i] = 0;
	}

	return (arr);
}

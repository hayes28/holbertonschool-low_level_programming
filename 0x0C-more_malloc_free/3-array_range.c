#include "main.h"

/**
 * array_range - function that creates an array of integers.
 * @min: start value
 * @max: ending value
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc(((max - min) * sizeof(int)) + sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= (max - (min - i)); i++)
	{
		arr[i] = min;
		min++;
	}

	return (arr);
}

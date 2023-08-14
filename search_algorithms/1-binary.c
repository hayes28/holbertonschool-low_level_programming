#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located, or -1 if value is not present
 * in array or if array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	int *p = array;

	if (!array)
		return (-1);

	while (size)
	{
		printf("Searching in array: ");
		for (i = 0; i < size; i++)
		{
			if ((i + 1) == size)
				printf("%d\n", p[i]);
			else
				printf("%d, ", p[i]);
		}
		i = (size - 1) / 2;
		if (p[i] == value)
			return ((p - array) + i);
		else if (p[i] > value)
		{
			size = i;
		}
		else
		{
			p += i + 1;
			size -= i + 1;
		}
	}
	return (-1);
}

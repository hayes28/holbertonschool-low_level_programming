#include "function_pointers.h"

/**
* int_index - function that searches for an integer.
* @array: array to search
* @size: number of elements in the array
* @cmp: pointer to compare
*
* Return: index of first element or -1 if fails
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}

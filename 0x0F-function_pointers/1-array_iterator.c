#include "function_pointers.h"
#include <stddef.h>

/**
* array_iterator - executes a function given as a parameter
* on each element of an array.
* @array: given array
* @size: size of array
* @action: pointer of the function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

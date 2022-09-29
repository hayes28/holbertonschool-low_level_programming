#include "main.h"

/**
 * print_array - Prints elements of an array.
 * @a: Array
 * @n: Number
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);

		if (x == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}

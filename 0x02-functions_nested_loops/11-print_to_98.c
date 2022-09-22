#include "main.h"
#include <stdlib.h>

/**
 * print_to_98 - Print all natural numbers from n to 98
 * followed by a new line.
 * @n: number to begin counting from
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
	while (n > 98)
		printf("%d, ", n--);
	printf("%d\n", n);
	}
	else
	{
		while (n < 98)
		printf("%d, ", n++);
		printf("%d\n", n);
	}
}

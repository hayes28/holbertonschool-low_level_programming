#include "main.h"
/**
 * print_square - Function that prints a square
 * followed by a new line
 * @size: size of square
 */
void print_square(int size)
{
	int H, W;

	if (size > 0)
	{
	for (H = 0; H < size; H++)
		{
		for (W = 0; W < size; W++)
			_putchar('#');

		if (H == size - 1)
			continue;
		_putchar('\n');
		}
	}

	_putchar('\n');
}

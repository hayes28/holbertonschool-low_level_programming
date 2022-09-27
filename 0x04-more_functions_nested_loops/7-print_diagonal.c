#include "main.h"
/**
 * print_diagonal - Functions that draws
 * diagonal line in terminal
 * @n: the integer for this function
 */
void print_diagonal(int n)
{
	int x = 0;
	int y = 0;

	if (n > 0)
	{
		while (x < n)
		{
			while (y < x)
			{
				_putchar(' ');
				y++;
			}
			x++;
			y = 0;
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}

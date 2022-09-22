#include "main.h"

/**
 * main - prints alphabet in lowercase 10x
 * followed by new line
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int N;
	char L;

	N = 0;

	while (N <= 9)

		for (L = 'a'; L <= 'z'; L++)
			_putchar(L);
	_putchar('\n');
	N++;
}

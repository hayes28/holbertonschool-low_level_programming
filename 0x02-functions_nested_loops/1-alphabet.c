#include "main.h"

/**
 * print_alphabet - Prints alphabet in lowercase
 * followed by a new line
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char L;

	for (L = 'a'; L <= 'z'; L++)
		_putchar(L);

	_putchar('\n');
}

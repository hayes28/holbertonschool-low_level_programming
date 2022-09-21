#include <stdio.h>
/**
 * main - Prints all numbers of base 16
 * in lowercase using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int N;
	char L;

	for (N = 0; N < 10; N++)
		putchar((N % 10) + '0');
	for (L = 'a'; L <= 'f'; L++)
		putchar(L);
	putchar('\n');
	return (0);
}

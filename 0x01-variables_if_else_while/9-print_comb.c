#include <stdio.h>
/**
 * main - Prints all single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int N;

	for (N = 0; N <= 9; N++)
	{
		putchar((N % 10) + '0');
	if (N == 9)
		continue;

	putchar(',');
	putchar(' ');
	}

	putchar('\n');

	return (0);
}

#include <stdio.h>
/**
 * Main - Print all single numbers of base 10
 * Starting with 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{	int N;
	for (N = '0'; N <= '9'; N++)
		putchar(N);
	putchar('\n');
	return (0);
}

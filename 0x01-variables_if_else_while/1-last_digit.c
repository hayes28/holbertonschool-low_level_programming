#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - holbertonschool/0x01.c/0-positive_or_negative_c
 * is the source file/code pathway.
 * Assigning random number to a variable for each execution
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of n is");
	if (n > 5)
	printf("%d and is greater than 5", n);
	else if (n == 0)
	printf("%d and is 0", n);
	else if (n < 6 && n != 0)
	printf("%d and is less than 6 and not 0\n", n);
	return (0);
}

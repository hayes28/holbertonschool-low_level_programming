/**
 * main - file 2-print_alphabet.c
 * print alphabet with lowercase letters
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}

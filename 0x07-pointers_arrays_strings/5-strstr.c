#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @needle: substring to be found
 * @haystack: string to search
 *
 * Return: pointer to beginning of substring or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != *needle && *haystack != '\0')
	{
		haystack++;
	}
	if (*haystack == *needle)
	{
		return (needle);
	}
	else
	{
		return (NULL);
	}
}

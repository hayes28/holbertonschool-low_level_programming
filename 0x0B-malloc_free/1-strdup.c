#include "main.h"

/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of
 * the string given as a parameter.
 * @str: string character
 *
 * Return: a pointer to new string, or str=NULL
 */
char *_strdup(char *str)
{
	char *arr;
	int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	arr = malloc(sizeof(char) * (len + 1));

	if (arr == NULL)
		return (NULL);

	while ((arr[i] = str[i]) != '\0')
		i++;

	return (arr);

}

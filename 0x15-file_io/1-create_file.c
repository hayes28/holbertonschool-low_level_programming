#include "main.h"

/**
 * _strlen - find length of string
 * @str: string
 *
 * Return: length
 */
int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	return (len);
}

/**
 * create_file - function that creates a file.
 * @filename: name to give file
 * @text_content: write this content into file
 *
 * Return: 1 for success, -1 for error
 */
int create_file(const char *filename, char *text_content)
{
	int fd, n_wrote;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}
	n_wrote = write(fd, text_content, _strlen(text_content));
	if (n_wrote == -1 || n_wrote != _strlen(text_content))
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}

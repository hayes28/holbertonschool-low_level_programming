#include "dog.h"
char *_strdup(char *str);
/**
* new_dog - creates a new dog
* @name: new dog's name
* @age: new dog's age
* @owner: owner of new dog
*
* Return: pointer to the new struct
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	new->name = _strdup(name);
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}
	new->owner = _strdup(owner);
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	new->age = age;

	return (new);
}

/**
* _strdup - copies string to allocate memory
* @str: pointer to string
*
* Return: pointer to copy string, NULL if NULL or error with malloc
*/
char *_strdup(char *str)
{
	int size, i;
	char *p;

	if (str == NULL)
		return (NULL);
	for (size = 0; str[size] != 0; size++)
	p = malloc(sizeof(char) * (size));
	if (p == NULL)
		return (NULL);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		p[i] = str[i];
	}
	return (p);
}

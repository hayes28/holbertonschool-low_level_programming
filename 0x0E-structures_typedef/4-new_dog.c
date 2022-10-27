#include "dog.h"
char *_strdup(const char *str);
/**
* new_dog - Function to create a new dog
* @name: name of new dog
* @age: age of new dog
* @owner: owner of new dog
*
* Return: NULL if function fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *fi;

	fi = malloc(sizeof(dog_t));
	if (fi)

	fi->name = _strdup(name);
	if (fi->name)
	{
		free(fi);
		return (NULL);
	}
	fi->owner = _strdup(owner);
	if (fi->owner)
	{
	free(fi->name);
	free(fi);
	return (NULL);
	}
	fi->age = age;

	return (fi);

}

/**
* _strdup - copies string while allocating memory.
* @str: pointer to a string
*
* Return: pointer to copied string, otherewise NULL if fails.
*/
char *_strdup(const char *str)
{
	int size, a;
	char *p;

	for (size = 0; str[size] != 0; size++)

	p = malloc(sizeof(char) * (size + 1));
	if (p)

	for (a = 0; a < size; a++)
	{
		p[a] = str[a];
		a++;
	}
	p[a] = '\0';
	return (p);
}

#include "function_pointers.h"

/**
* print_name - function that prints a name.
* @name: name that will be printed
* @f: pointer to the printing function
*/
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}

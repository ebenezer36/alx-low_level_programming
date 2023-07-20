#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - prints a name as is
 * @name: name of person
 * @f: pointer to function
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	else
	{
		f(name);
	}
}

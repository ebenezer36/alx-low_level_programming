#include "main.h"

/**
 *  _strlen_recursion - prints the string lenght
 *  @s : pointer to string params
 *  Return: recursion
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recurssion(++s));
}

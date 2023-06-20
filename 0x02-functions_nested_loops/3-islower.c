#include "main.h"
/**
 * _islower - checks for lowercase character
 * @j: character to check if it is a lowercase
 * Return: 1 if lowercase, 0 if not.
 */
int _islower(int j)
{
	if (j >= 'a' && j <= 'z')
		return (1);
	else
		return (0);
}

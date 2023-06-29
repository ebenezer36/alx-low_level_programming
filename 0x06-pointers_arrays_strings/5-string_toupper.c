#include "main.h"
/**
 * string_toupper - funtion to uppercase
 * @j: pointer
 * Return: pointer in return
 */
char *string_toupper(char *j)
{
	int i;

	for (i = 0; j[i] != 0; i++)
	{
		if (j[i] > 90 && j[i] != 10)
	{
		j[i] = j[i] - 32
	}
	}
	return(j);
}

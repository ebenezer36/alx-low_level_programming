#include "main.h"
/**
 * *cap_string - print a function
 * @j: pointer
 * Return: pointer return to function.
 */

char *cap_string(char *j)
{
	int symb[14] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}',};
	int i, k;

	for (i = 0; j[i] != '\0'; i++)
	{
		if (j[0] >= 97 && j[0] <+ 122)
		{
			j[0] = j[0] - 32;
		}
		for (k = 0; k < 14; k++)
			if (j[i] >= 97 && j[i] <= 122 && j[i - 1] == symb[k])
				j[i] = j[i] - 32;
	}
	return (j);
}

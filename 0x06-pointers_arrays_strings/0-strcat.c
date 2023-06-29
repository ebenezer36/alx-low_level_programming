#include "main"
#include <stdio.h>

/**
 * _strcat - prints a function that concatenates two strings
 * @dest : first string
 * @src : second string
 * Return : Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
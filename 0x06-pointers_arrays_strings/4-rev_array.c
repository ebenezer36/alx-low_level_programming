#include "main.h"
#include <stdio.h>
/**
 * reverse_array - a function that reverse the content of an array
 * @a: pointer
 * @n: integer
 * Return: No return
 */
void reverse_array(int *a, int n)
{
	int b, o, y;

	if (n % 2 != 0)
		y = n + 1;
	else
		y = n;
	for (b = 0; b < y / 2; b++)
	{
		o = a[b];
		a[b] = a[n - 1 - b];
		a[n - 1 - b] = o;
	}
}

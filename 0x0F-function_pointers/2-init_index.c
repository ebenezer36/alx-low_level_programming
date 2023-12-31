#include <stdio.h>
#include "function_pointers.h"
/**
 * init_index - checks for an integer
 * @array: a pointer of integer
 * @size: Number of iterations
 * @cmp: pointer of the function
 *
 * Return: Always 0 (success)
 */
int int_index(int *array, int size, int (*cmp)(int));
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size, i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}

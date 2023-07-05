#include "main.h"

/**
 * factorial - print factorial of a given number
 * @n :integer params
 * Return: 0 if integer is lower than zero, return -1 to indicate an error
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

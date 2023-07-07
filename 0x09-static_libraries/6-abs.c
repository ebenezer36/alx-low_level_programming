#include "main.h"
/**
 * _abs - print the absolute value of an integer
 * @t: the integer to compute its absolute vale
 * Return: return the abs value.
 */
int _abs(int t)
{
	int j = t;
	int absvalue;

	if (j < 0)
	{
		j = j * (-1);
	}
	absvalue = j;
	return (absvalue);
}

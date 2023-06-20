#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @v: number to compute last digit.
 * Return: last digit.
 */

int print_last_digit(int v)
{
	int last_digit;

	last_digit = v % 10;
	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');
}

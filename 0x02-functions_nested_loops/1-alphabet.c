#include "main.h"
/**
 * print_alphabet - print all lowercase alphabet
 * Return: On success 1.
 */
void print_alphabet(void)
{
	char j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}

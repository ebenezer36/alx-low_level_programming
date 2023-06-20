#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 * Return : On sucess 1.
 */
void print_void_x10(void)
{
	char j, r;
	
	for (r = 0; r < 10; r++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n')
	}
}	

#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer start from 00:00
 * return: O if  successful
 */
void jack_bauer(void)
{
	int b, r, e, d;

	for (b = 0; b <= 2; b++)
	{
		for (r = 0; r <= 9; r++)
		{
			for (e = 0; e <= 5; e++)
			{
				for (d = 0; d <= 9; d++)
				{
					if (b == 2 && r > 3)
					{
						break;
					}
					_putchar(b + '0');
					_putchar(r + '0');
					_putchar(':');
					_putchar(e + '0');
					_putchar(d + '0');
					_putchar('\n');
				}
			}
		}
	}
}

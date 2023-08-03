#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b : pointer to string containing a binary number
 * Return: unsigned int with decimal value of binary number, or 0 if error
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ben;
	int den, base_two;

	if (!b)
		return (0);

	ben = 0;

	for (den = 0; b[den] != '\0'; den++)
		;

	for (den--, base_two = 1; den >= 0; den--, base_two *= 2)
	{
		if (b[den] != '0' && b[den] != '1')
		{
			return (0);
		}

		if (b[den] & 1)
		{
			ben += base_two;
		}
	}

	return (ben);
}

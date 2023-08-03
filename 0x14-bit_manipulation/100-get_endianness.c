#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int rozzay;
		char *c;

	rozzay = 1;
	c = (char *) &rozzay;

	return ((int)*c);
}

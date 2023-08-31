#include "main.h"

/**
 * get_endianness - checks endianness
 *
 * Return: 0 for big endian, 1 for little endian
 */

int get_endianness(void)
{
	int m = 1;

	return (*((char *) &m) + '0');
}

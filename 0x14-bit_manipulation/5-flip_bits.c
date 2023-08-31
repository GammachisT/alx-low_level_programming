#include "main.h"

/**
 * flip_bits - flip to get from one number to another
 * @n: input
 * @m: bit
 * Return: 0
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			flip++;
		m = m >> 1;
		n = n >> 1;
	}

	return (flip);

}

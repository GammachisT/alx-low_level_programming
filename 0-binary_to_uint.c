#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: pointing to string
 * Return: converted no. else 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int root = 1, i = 0;

	if (b == NULL)
		return (0);

	while (b[i + 1])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	while (i >= 0)
	{
		res += ((b[i] - '0') * root);
		root *= 2;
		i--;
	}
	return (res);
}

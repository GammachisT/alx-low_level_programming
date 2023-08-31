#include "main.h"

/**
 * get_bit - Return value of bit at a given index
 * @n: input
 * @index: index
 * Return: value of bit else -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	if (index > 63)
		return (-1);

	i = 1 << index;
	return ((n & i) > 0);
}

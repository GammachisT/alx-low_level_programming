#include "main.h"

/**
 * clear_bit - sets value of bit to 0
 * @n: input
 * @index: index
 * Return: 1 is success else -1
 */
	int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n & ~(1ul << index);
	return (1);
}

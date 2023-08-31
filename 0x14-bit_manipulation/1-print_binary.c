#include "main.h"
#include <unistd.h>
#include <limits.h>

/**
 * print_binary - prints the binary representation of a number.
 *
 * @n: unsigned long int
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int number = 1ul << 63;
	char c = '0';

	while (!(number & n) && number != 0)
		number = number >> 1;

	if (number == 0)
		write(1, &c, 1);

	while (number)
	{
		if (number & n)
			c = '1';
		else
			c = '0';
		write(1, &c, 1);
		number = number >> 1;
	}
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints alphabet except e and q
 *
 * Return: 0 (success)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}

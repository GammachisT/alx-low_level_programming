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
	char letter, e, q;

	e = 'e';
	q = 'q';

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != e && letter != q)
			putchar(letter);
	}
	putchar('\n');
	return (0);
}

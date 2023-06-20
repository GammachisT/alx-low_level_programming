#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long i, j, k;
	unsigned long a, b, c, cary;

	count = 0;
	i = 0;
	j = 1;
	for (count = 1; count <= 91; count++)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%lu, ", k);
	}
	a = i % 1000;
	i = i / 1000;
	b = j % 1000;
	j = j / 1000;
	while (count <= 98)
	{
		cary = (a + b) / 1000;
		c = (a + b) - cary * 1000;
		k = (i + j) + cary;
		a = b;
		b = c;
		i = j;
		j = k;
		if (c >= 100)
			printf("%lu%lu", k, c);
		else
			printf("%lu0%lu", k, c);
		if (count != 98)
			printf(", ");
		count++;
	}
	putchar('\n');
	return (0);
}

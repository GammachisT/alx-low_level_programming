#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase
 *
 * Return: 0 (success)
 */

int main(void)
{
	char alph[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	     int i;

	for (i = 0; i <= 52; i++)
	{
		putchar(alph[i]);
	}
	putchar('\n');
	return (0);
}

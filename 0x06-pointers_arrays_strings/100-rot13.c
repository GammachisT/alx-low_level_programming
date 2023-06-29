#include "main.h"

/**
 * *rot13 - encodes a string using rot13
 * @s: string to be encoded
 *
 * Return: String encoded to rot13.
 */
char *rot13(char *s)
{
	char a[] = "abcdefjhijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefjhijklmNOPQRSTUVWXYABCDEFGHIJKLM";
	int index, count;

	for (index = 0; *(s + index); index++)
	{
		for (count = 0; count < 52; count++)
		{
			if (a[count] == *(s + index))
			{
				*(s + index) = rot[count];
				break;
			}
		}
	}
	return (s);
}

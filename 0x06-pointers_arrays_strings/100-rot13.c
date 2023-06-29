#include "main.h"

/**
 * *rot13 - encodes a string using rot13
 * @s: string to be encoded
 *
 * Return: String encoded to rot13.
 */
char *rot13(char *s)
{
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefjhijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYABCDEFGHIJKLMnopqrstuvwxyzabcdefjhijklm";
	int index, count;

	for (index = 0; s[index] != '\0'; index++)
	{
		for (count = 0; count < 52; count++)
		{
			if (s[index] == a[count])
			{
				s[index] = rot[count];
				break;
			}
		}
	}
	return (s);
}

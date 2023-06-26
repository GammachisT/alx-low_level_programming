#include "main.h"
#include <stdio.h>

/**
 * rev_string - reversing a string.
 *
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int i, len = 0;
	char tmp = s[0];

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len / 2; i++)
	{
		len--;
		tmp = s[i];
		s[i] = s[len];
		s[len] = tmp;
	}
}

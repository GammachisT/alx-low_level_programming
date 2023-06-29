 #include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: string with concatenation
 * @src: string to be concatenated
 * Return: 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, m;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (m = 0; src[m] != '\0' && m < n; m++)
	{
		dest[i + m] = src[m];
	}
	dest[i + m] = '\0';
	return (dest);
}

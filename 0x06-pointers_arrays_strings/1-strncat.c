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

	i = 0;
	m = 0;

	while (*(dest + i) != '\0')
		i++;

	while (*(src + m) != '\0' && i < 97 && m < n)
	{
		*(dest + i) = *(src + m);
		i++;
		m++;
	}
	*(dest + i) = '\0';
	return (dest);
}

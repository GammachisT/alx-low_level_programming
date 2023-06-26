#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: input string
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	int ctr;

	for (ctr = 0; s[ctr] != '\0' ; ctr++)
		;
	return (ctr);
}

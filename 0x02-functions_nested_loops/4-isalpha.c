#include "main.h"

/**
 * _isapha - check the code
 * @c: character to be checked.
 * Return: 1 if c is a letter, lowercase or uppercase
 * Returns 0 otherwise
 */
int _isalpha(int c)
{
	char c;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

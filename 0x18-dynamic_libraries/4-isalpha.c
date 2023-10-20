#include "main.h"

/**
 * _isalpha - Checks if the given character is lower case or uppercase.
 * @c: character to test.
 * Return: 1 for success, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}

#include "main.h"

/**
 * _islower - tests whether a charater is lower or not
 * @c: character to test.
 * Return: 1 if c is lowercase, 0 if not.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}


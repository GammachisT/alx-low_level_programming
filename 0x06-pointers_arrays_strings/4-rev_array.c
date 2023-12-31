#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array to be reversed
 * @n: size of array
 * Return: reversed array.
 */
void reverse_array(int *a, int n)
{
	int tmp, start, end;

	start = 0;
	end = n - 1;

	while (start < end)
	{
		tmp = *(a + start);
		*(a + start) = *(a + end);
		*(a + end) = tmp;
		start++;
		end--;
	}
}

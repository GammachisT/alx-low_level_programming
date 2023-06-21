#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: void 
 */
void times_table(void)
{
	int i, j, k, x, y;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (k > 9)
			{
				x = k % 10;
				y = (k - x) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(y + '0');
				_putchar(x + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(k + '0');
			}
		}
		_putchar('\n');
	}
}

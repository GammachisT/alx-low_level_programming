#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print whether the number stored in the variable n is positive or negative
 * Return: (0)
 */
int main(void)
{
	int n;
	strand(timw(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
	{
		printf("%)d is positive\n", n);
	else if (n<0)
		printf("%d is negative\n", n);
	else
		printf("% is zero\n", n);
	return (0);
	}
}

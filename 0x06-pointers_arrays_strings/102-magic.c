#include <stdio.h>

int main(void)
{
	int n;
	int *p;
	int a[5];

	a[2] = 1024;
	p = &n;
	/**
	 * write your line of code here..
	 * Remember:
	 * - you are not allowed to use a
	 * - You are not allowed to modify the variable p
	 * - only one statement
	 * - You are not allowed to code anything else than this line of code
	 */
	*(p + 5) = 98;
	/* to print this on newline */
	printf("a[2] = %d\n", a[2]);
	return (0);
}

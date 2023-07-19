#include "3-calc.h"
/**
 * op_add - function that adds two numbers
 * @a:the first number
 * @b:the second number.
* Return: return the result of the add.
*/

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function that sub two numbers
 * @a:the first number
 * @b:the second number.
* Return: return the result of the sub.
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function that mult two numbers
 * @a:the first number
 * @b:the second number.
* Return: return the result of the multiply.
*/

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function that divide two numbers
 * @a:the first number
 * @b:the second number.
* Return: return the result of the divide.
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}
/**
 * op_mod - function that calcualte the module of no.
 * @a:the first number
 * @b:the second number.
* Return: return the result of the module.
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

#include "function_pointers.h"
/**
 * print_name- functions that prints a name
 *@name: string to print.
 *@f: a function pointer, that recieves a string.
* Return: this is a void function no return
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}

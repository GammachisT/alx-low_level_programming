#include "function_pointers.h"
/**
 * array_iterator - function that executes a function
 *@array: the array to iterate
 *@size: the size of the array.
 *@action: pointer function.
 * Return: this is a void function no return
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
	{
	for (i = 0; i < size; i++)
		action(*(array + i));
	}
}

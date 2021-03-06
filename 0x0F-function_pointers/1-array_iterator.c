#include "function_pointers.h"

/**
 * array_iterator - execute a function pointer on each element
 * @array: array of integers
 * @size: size of the array
 * @action: function pointer
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;
	void (*p)(int);

	p = action;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		p(array[i]);
}

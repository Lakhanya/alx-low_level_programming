#include "function_pointers.h"

/**
 * print_name - Print name from function pointer
 * @name: char string
 * @f: function pointer that takes a string argument
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}

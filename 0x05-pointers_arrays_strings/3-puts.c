#include "main.h"

/**
 * _puts - prints a string 
 * @str: a pointer to int that will be changed
 *
 * Return: void (success)
 */

void _puts(char *str)
{
	char *c;

	int m;

	c = str;
	
	for (m = 0; c[m]; m++)
	{
		_putchar (c[m]);
	}
	_putchar('\n');
}

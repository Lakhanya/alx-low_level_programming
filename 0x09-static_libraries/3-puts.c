#include "main.h"

/**
 * _puts - prints a string
 * @str: a pointer to int that will be changed
 *
 * Return: void (success)
 */

void _puts(char *s)
{
	char *c;

	int m;

	c = s;

	for (m = 0; c[m]; m++)
	{
		_putchar (c[m]);
	}
	_putchar('\n');
}

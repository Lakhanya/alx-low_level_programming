#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: a pointer to an integer that will be upadated/changed
 * @n: return the value n
 * Return: void (success)
 */

void print_array(int *a, int n)

{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(",");
		}

		i++;
	}
	printf("\n")
		;
}

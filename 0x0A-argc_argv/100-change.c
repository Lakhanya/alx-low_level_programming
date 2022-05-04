#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print min number of coins to make change for that amount of money
 * @argc: argument counter
 * @argv: argument vector, array of strings
 * Return: 1 if error, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int total, count;
	unsigned int i;
	char *p;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = strtol(argv[1], &p, 10);
	count = 0;

	if (!*p)
	{
		while (total > 0)
		{
			for (i = 0; sizeof(cents[i]); i++)
			{
				if (total >= cents[i])
				{
					count += total / cents[i];
					total = total % cents[i];
				}
			}
		}
		if (total == 0)
			count++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", count);
	return (0);
}

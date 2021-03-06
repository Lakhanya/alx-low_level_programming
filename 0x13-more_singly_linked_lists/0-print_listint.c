#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print all elements of listint_t list
 * @h: linked list head to print from
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}

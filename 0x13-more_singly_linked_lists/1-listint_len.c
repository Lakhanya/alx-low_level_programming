#include "lists.h"
#include <stdio.h>

/**
 * listint_len - find the number of elements in linked listint_t list
 * @h: linked list head
 * Return: number of elements in linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t nbr_element = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		nbr_element++;
	}
	return (nbr_element);
}

#include "lists.h"

/**
 * sum_listint - returns the sum of all data on a linked list
 * @head: the head of a linked list
 * Return: sum, 0 if linked list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

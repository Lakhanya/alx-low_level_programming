#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - returns length of a string
 * @s: the string whose length to return
 * Return: length of the string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * *add_node - adds a node to a linked list head
 * @head: linked list head
 * @str: string to be saved in new node, must be duplicated
 * Return: Address of new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int length = _strlen(str);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = length;
	new->next = *head;
	*head = new;
	return (new);
}

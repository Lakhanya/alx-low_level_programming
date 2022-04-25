#include "main.h"

/**
 * _strchr - locates charcater in a string
 * @s: string to check
 * @c: charcater to be located
 *
 * Return: a pointer to the first occurance of char @c in string @s,
 * return NULL if the character isn't found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}

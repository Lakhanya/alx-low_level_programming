#include "main.h"

/**
 * _memcpy - function that copies a memory area
 * @dest: destination memory area to be copied to
 * @n: the number of bytes
 * @src: source memory area to be copied from
 *
 * Return: pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest)
}

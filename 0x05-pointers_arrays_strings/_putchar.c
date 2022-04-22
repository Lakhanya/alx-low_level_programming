#include <unistd.h>

/**
 * _putchar - writes the charcter c to stdout
 * @c: character to print
 *
 * Return: 1 on sucess
 * On error -1 is returned, error is therefore returned
 */

int _putchar (char c)
{
	return (write(1, &c, 1));
}

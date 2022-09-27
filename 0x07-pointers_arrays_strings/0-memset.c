#include "main.h"

/**
 * *_memset - this fills the memory with a constant byte.
 * @s: pointer to insert constant
 * @b: constant
 * @n: illustrates the maximum bytes to use
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}

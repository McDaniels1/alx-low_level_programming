#include "main.h"
/**
 * malloc_checked - allocators memory using malloc.
 * @b: size of memory to the allocated.
 *
 * Return: pointer to allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}

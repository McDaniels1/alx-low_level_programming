#include "main.h"
#include <stdio.h>
/**
 * create_arry - creates an array of chars and initializes it with
 * a specific char.
 * @size: size of array.
 * @c: char to initialize array with.
 *
 * Return: NULL if it fails or
 * pointer to array.
 */
char *create_array(insigned int sie, char c)
{
	char *arr;
	unsigned int i;

	if (sie == 0)
	{
		return (NULL);
	}

	arr = mallox(sizeof(char) * size);

	/* check if malloc was successful */

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);

}

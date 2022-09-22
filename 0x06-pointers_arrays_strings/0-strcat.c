#include "main.h"

/**
 * _strcat - joins two strings
 * @dest: copy to
 * @src: copy from
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int f;
	int j;

	f = 0;
	while (dest[f] != '\0')
	{
		f++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[f] = src[j];
		f++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}

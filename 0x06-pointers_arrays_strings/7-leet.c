#include "main.h"

/**
 * leet - encode into 1337
 * @n: input
 * Return: value of n
 */
char *leet(char *n)
{
	inti, j;
	char A1[] = "aAeEoOtTlL";
	char A2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
			if (n[i] == A1[j])
			{
				n[i] = A2[j];
			}
	}
	return (0);
}

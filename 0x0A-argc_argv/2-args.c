#include <stdio.h>
#include "main.h"

/**
 * main - this prints all arguments
 * @argc: d argument count
 * @argv: d argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}

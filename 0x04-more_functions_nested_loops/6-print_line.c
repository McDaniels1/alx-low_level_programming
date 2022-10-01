#include"main.h"

/**
 * print_line - print a straight line
 *
 * @n: is the number of times of time the _ character
 *     should be printed
 */

void print_line(int n)
{
	int lnChr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnChr = 1; inChr <= n; ++lnChr)
			_putchar('_');
		_putchar('\n');
	}
}

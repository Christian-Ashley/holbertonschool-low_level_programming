#include "main.h"

/**
 * print_line - draws a straight line in terminal
 * @n: number of times _ should be printed
 *
 * Return: void
 */

void print_line(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

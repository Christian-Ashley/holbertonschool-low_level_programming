#include "main.h"

/**
 * print_rev -  prints string in reverse
 * @s: the string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	for (x = (x - 1); x >= 0; x--)
	{
		_putchar(s[x]);
	}
	putchar('\n');
}


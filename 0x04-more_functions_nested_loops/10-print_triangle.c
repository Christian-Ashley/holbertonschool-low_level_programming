#include "main.h"

/**
 * print_triangle - prints a triangle out of #
 * @size: size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int m;
	int z;
	int y;
	int x;
	int space;

	m = 0;
	z = 0;

	if (size > 0)
	{
		space = (size - 1);

		while (m < size)
		{
			for (x = space; x > 0; x--)
			{
				_putchar(' ');
			}
			(z++);
			for (y = 0; y < z; y++)
			{
				_putchar(35);
			}
			_putchar('\n');
			(m++);
			(space--);
		}
	}
	else
	{
		_putchar('\n');
	}
}

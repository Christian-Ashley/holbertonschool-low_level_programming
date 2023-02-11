#include "holberton.h"

/**
 * reverse_array - reverses an array
 * @a: points to an array
 * @n: integer representing # of things in array
 * Return: reversed array
 */

void reverse_array(int *a, int n)
{
	int temp;
	int index;

	index = n - 1;

	while (index >= n / 2)
	{
		temp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = temp;
		index--;
	}
}

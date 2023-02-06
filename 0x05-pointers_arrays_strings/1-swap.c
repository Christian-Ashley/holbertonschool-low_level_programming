#include "main.h"

/**
 * swap_int - swaps the values of 2 intigers
 * @a: int to be swaped
 * @b: int to be swaped
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;

	*a = *b;
	*b = x;
}

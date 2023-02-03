#include "main.h"
#include <stdio.h>

/**
 * mul - multiplies 2 intigers
 * @a: intigier that will be multiplied
 * @b: intiger that will be multiplied
 * Return: Always 0 (Success)
 */

int mul(int a, int b)

{

	for (a >= 0; b >= 0; a++, b++)
	{
		printf("%d", a * b);
	}
	return (0);
}

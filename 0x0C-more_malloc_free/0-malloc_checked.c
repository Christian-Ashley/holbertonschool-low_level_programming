#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - does things i dont really understand with memory
 * @b: the size of memory to allocate
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
		exit(98);

	return (pointer);
}

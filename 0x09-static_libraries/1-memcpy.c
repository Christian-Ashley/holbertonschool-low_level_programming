#include "main.h"

/**
 * _memcpy - copy something from memory
 * @dest: destination for string
 * @src: source of string
 * @n: number of bytes
 * Return: 0 is success
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}

	return (dest);
	}

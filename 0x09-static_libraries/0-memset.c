#include "main.h"

/**
 * *_memset - fills memory with constant byte
 * @s: string that is pointed to
 * @b: string
 * @n: variable thats unassighned
 * Return: pointer to new filled memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

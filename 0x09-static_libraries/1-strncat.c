#include "main.h"

/**
 * _strncat - adds a string to a string
 * @dest: destination for the final string
 * @src: source string
 * @n: number of bytes from src to be placed in dest
 * Return: compounded string inside dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0;
	int dl = 0;

	while (dest[dl])
	{
		dl++;
	}
	for (index = 0; src[index] && index < n; index++)
	{
		dest[dl] = src[index];
		dl++;
	}

	return (dest);
}

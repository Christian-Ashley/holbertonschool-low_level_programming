#include "main.h"

/**
 * _strncpy - copys a string
 * @dest: destination of string
 * @src: source of string
 * @n: the number of chars to copy
 * Return: the string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;
	int sl = 0;

	while (src[index])
	{
		index++;
		sl++;
	}

	for (index = 0; src[index] != '\0' && index < n; index++)
	{
		dest[index] = src[index];
	}

	for (index = sl; index < n; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}

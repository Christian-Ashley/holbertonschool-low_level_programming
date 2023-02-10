#include "holberton.h"

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

	for (index = 0; src[index] != '\0' && index < n; index++)

		dest[index] = src[index];

	return (dest);
}

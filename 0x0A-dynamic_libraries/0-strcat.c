#include "main.h"

/**
 * *_strcat - appends two strings
 * @dest: destination for final string
 * @src: source of string
 * Return: compounded string inside dest
 */
char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dl = 0;

	while (dest[index])
	{
		index++;
		dl++;
	}
	for (index = 0; src[index] && index < dl; index++)
	{
		dest[dl++] = src[index];
	}
	return (dest);
}

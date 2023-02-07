#include "main.h"

/**
 * _strlen - Returns length of a string
 * @s: the string
 *
 * Return: Length of string
 */

int _strlen(char *s)
{
	int sl = 0;

	while (*s != '\0')
	{
		(s++);
		(sl++);
	}
	return (sl);
}

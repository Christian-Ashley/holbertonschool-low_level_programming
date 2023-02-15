#include "main.h"

/**
 * _strlen_recursion - returns length of s
 * @s: the string
 * Return: length of string
 */

int _strlen_recursions(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursions(s + 1));
}

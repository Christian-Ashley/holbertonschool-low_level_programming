#include "holberton.h"

/**
 * _strcmp - compares 2 strings
 * @s1: container of string 1
 * @s2: container of string 2
 * Return: 0 if strings are the same
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}

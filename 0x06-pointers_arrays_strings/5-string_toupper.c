#include "holberton.h"

/**
 * *string_toupper - changes lowercase letters in a string to uppercase
 * @str: the string
 * Return:the string
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		index++;
	}

	return (str);
}

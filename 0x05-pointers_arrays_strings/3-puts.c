#include "main.h"

/**
 * _puts - prints string followed by new line
 * @str:the string that is printed
 *
 * Return: void
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}

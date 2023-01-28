#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	for (int x = 'a'; x <= 'z'; x++)
	{
		int lower_x = tolower(x);

		putchar(x);
	}
	return (0);
}

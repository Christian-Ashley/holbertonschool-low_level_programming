#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * @argc: arguement counter
 * @argv: arguement vector
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}
	return (0);
}

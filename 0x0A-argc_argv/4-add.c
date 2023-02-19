#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds shit
 * @argc: counts shit
 * @argv: holds shit
 * Return: 0 shits
 */

int main(int argc, char *argv[])
{
	int index;
	int var = 0;
	int sum = 0;

	for (index = 1; index < argc; index++)
	{
		for (var = 0; argv[index][var]; var++)
		{
			if (argv[index][var] < '0' || argv[index][var] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[index]);
	}
	printf("%d\n", sum);
	return (0);
}

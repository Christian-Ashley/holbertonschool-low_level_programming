#include "3-calc.h"
/**
 * main - where we actually do the math
 * @argc: counts the arguements in command line
 * @argv: arguement vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char *i;
	int (*oporator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	i = argv[2];
	operator = get_op_func(1);

	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((strcmp(i, "/") == 0 || (strcmp(i, "%")) == 0) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", operator(num1, num2));
	return (0);
}

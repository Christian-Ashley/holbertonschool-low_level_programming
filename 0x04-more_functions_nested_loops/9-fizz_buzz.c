#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: fizzbuzz
 *
 * Return: void
 */

int main(void)
{
	int x;

	x = 1;

	while (x <= 100)
	{
		if (x % 3 == 0)
		{
			printf("Fizz");
			(x++);
		}
		else if (x % 5 == 0)
		{
			printf("Buzz");
			(x++);
		}
		else if (x % 3 == 0 && x % 5 == 0)
		{
			printf("FizzBuzz");
			(x++);
		}
		else if (x % 3 != 0 && x % 5 != 0)
		{
			printf("%d", x);
			(x++);
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}

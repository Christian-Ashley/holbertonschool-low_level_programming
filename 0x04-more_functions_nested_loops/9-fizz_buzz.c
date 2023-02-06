#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: fizzbuzz
 *
 * Return: void
 */

void main(void)
{
	int x;

	x = 1;

	for (x >= 1; x <= 100; x++)
	{
		if (x % 3 == 0)
			printf("Fizz");
		if (x % 5 == 0)
			printf("Buzz");
		if (x % 3 == 0 && x % 5 == 0)
			printf("FizzBuzz");
		if (x % 3 != 0 && x % 5 != 0)
			printf("%d", x);
		putchar(' ');
	}
}

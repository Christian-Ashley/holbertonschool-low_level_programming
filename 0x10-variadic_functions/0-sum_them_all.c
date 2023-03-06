#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - takes all perameters and adds them
 * @n: first number
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int cnt = 0;
	int sum = 0;

	va_list num;

	if (n == 0)
		return (0);

	va_start(num, n);

	for (cnt = 0; cnt < n; cnt++)
	{
		sum += va_arg(num, int);
	}
	va_end(num);
	return (sum);
}

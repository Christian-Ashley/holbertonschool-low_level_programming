#include "main.h"

int _prime(int n, int c);
/**
 * is_prime_number - betty has made it personal now
 * @n: she told me that my joke on line 16 was too long
 * Return: the hounds of war
 */
int is_prime_number(int n)
{
	return (_prime(n, 1));
}
/**
 * _prime - this insult against me will not go unpunished
 * @n: betty i am coming for you
 * @c: and i am bringing hell with me
 * Return: with bettys head
 */
int _prime(int n, int c)
{
	if (n <= 1)
		return (0);
	if (n % c == 0 && c > 1)
		return (0);
	if ((n / c) < c)
		return (1);
	return (_prime(n, c + 1));
}

#include "main.h"

int _sqrt(int n, int c);
/**
 * _sqrt_recursion - does a thing
 * @n: has a thing done to it
 * Return: my sanity
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - stole my sanity
 * @n: is emotionaly scarred by what has bean done to it
 * @c: is n's highly devoted therapist
 * Return: with xanax
 */
int _sqrt(int n, int c)
{
	int sqt = c * c;

	if (sqt < 0)
		return (-1);
	if (sqt == n)
		return (c);
	return (_sqrt(n, c + 1));
}

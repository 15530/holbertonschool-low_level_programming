#include "main.h"

/**
 * sqrt_helper - looks for the natural square root of n
 * @n: the number
 * @i: the current candidate
 *
 * Return: the square root of n, or -1 if there is none
 */
int sqrt_helper(int n, int i)
{
	if (i > n / i)
		return (-1);

	if (i * i == n)
		return (i);

	return (sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 *
 * Return: the natural square root of n, or -1 if n has none
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (sqrt_helper(n, 2));
}

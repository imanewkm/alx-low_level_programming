#include "main.h"
/**
 * _sqrt_recursion - natural square root
 * @n: int
 * @val: square root
 * Return: 0
 */
int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - find square root
 * @n: int to find sqrt
 * @val: square root
 * Return: 0
 */
int square(int n, int val)
{
	if (val * val == n)
	{
		return (val);
	}
	else if (val * val < n)
	{
		return (square(n, val + 1));
	}
	else
	{
		return (-1);
	}
}

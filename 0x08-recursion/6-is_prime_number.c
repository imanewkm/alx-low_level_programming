#include "main.h"
/**
 * check_prime - function
 * @n: int
 * @i: int
 * Return: 0
 */
int check_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else
	{
		if (n % i == 0)
		{
			return (0);
		}
		else
		{
			return (check_prime(n, i - 1));
		}
	}
}
/**
 * is_prime_number - 1 if int is prime, 0 if not
 * @n: int
 * Return: 0
 */
int is_prime_number(int n)
{
	if (n <= 2)
	{
		return ((n == 2) ? 1 : 0);
	}
	return (check_prime(n, n / 2));
}

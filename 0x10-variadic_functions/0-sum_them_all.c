#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: unsigned int
 *
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list c;
	unsigned int i, sum;

	va_start(c, n);

	if (n == 0)
	{
		return (0);
	}
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(c, int);
	}
	va_end(c);
	return (sum);
}

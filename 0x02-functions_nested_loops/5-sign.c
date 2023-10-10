#include "main.h"
/**
 * print_sign - print the sign of num
 *
 * @c: the int to check
 *
 * Return: 1 and + if +, 0 if null, -1 and - if -
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar (43);
		return (1);
	}
	else if (c < 0)
	{
		_putchar (45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}

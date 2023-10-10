#include "main.h"
/**
 * print_sign - print the sign of num
 *
 * @n: the int to check
 *
 * Return: 1 and + if +, 0 if null, -1 and - if -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
	}
	else
	{
		_putchar ('-');
		return (0);
	}

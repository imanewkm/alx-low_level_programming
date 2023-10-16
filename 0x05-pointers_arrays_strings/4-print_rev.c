#include "main.h"
/**
 * print_rev - Entry point
 * @s: input
 * Return: 0
 */
void print_rev(char *s)
{
	char *end = s;

	while (*end)
	{
		end++;
	}
	end--;
	while (end >= s)
	{
		_putchar (*end);
		end--;
	}
	_putchar ('\n');
}


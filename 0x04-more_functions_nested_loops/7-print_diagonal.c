#include "main.h"
/**
 * print_diagonal - Entry point
 * @n: input
 * Return: 0
 */
void print_diagonal(int n)
{
	int i;
	int j;

	while (i < n)
	{
		j = 0;

		while (j < i)
		{
			_putchar (' ');
			j++;
		}
		_putchar ('\\');
		_putchar ('\n');
		i++;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}

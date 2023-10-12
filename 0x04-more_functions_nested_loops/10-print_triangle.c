#include "main.h"
/**
 * print_triangle - Entry point
 * @size: input
 * Return: 0
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j < size; j++)
		{
			if ((i + j) <= size)
				_putchar (' ');
			else
				_putchar ('#');
		}
		_putchar ('\n');
	}
}

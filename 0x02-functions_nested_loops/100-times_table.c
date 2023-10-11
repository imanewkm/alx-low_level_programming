#include "main.h"
/**
 * print_times_table - time table
 *
 * @n: num
 *
 * Return: time table
 */
void print_times_table(int n)
{
	int x, y, z, a, b;

	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			z = x * y;
			if (z > n)
			{
				a = z % 10;
				b = (z - a) / 10;
				_putchar (44);
				_putchar (32);
				_putchar (b + '0');
				_putchar (a + '0');
			}
			else
			{
				if (y != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar (z + '0');
			}
		}
		_putchar ('\n');
	}
}

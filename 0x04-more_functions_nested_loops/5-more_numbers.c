#include "main.h"
/**
 * more_numbers - Entry point
 *
 * Return: 0
 */
void more_numbers(void)
{
	char c;
	int x;

	x = 0;
	while (x < 10)
	{
		c = 0;
		while (c <= 14)
		{
			if (c > 9)
			{
				_putchar('0' + c / 10);
			}
			_putchar ('0' + c % 10);
			c++;
		}
		_putchar ('\n');
		x++;
	}
}

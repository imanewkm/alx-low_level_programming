#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char c;
	int x;

	x = 0;
	while (x < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar (c);
			c++;
		}
		_putchar ('\n');
		x++;
	}
}

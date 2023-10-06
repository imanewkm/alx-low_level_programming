#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'two two digit numbers'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 0;
	int y;

	while (x < 100)
	{
		y = x + 1;
		while (y < 100)
		{
			putchar(x / 10 + '0');
			putchar(x % 10 + '0');
			putchar(' ');
			putchar(y / 10 + '0');
			putchar(y % 10 + '0');
			if (x != 98 || y != 99)
			{
				putchar(',');
				putchar(' ');
			}
			y++;
		}
		x++;
	}
	putchar('\n');

	return (0);
}

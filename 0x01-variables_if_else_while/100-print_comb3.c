#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'two digits compination'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 0;
	int y;

	while (x < 10)
	{
		y = x + 1;
		while (y < 10)
		{
			if (x != y)
			{
				putchar(x + '0');
				putchar(y + '0');
			}
			y++;
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	putchar('\n');

	return (0);
}

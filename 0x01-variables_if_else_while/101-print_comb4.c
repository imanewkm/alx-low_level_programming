#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'three digit combination'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 0;
	int y = 1;
	int z;

	while (x < 10)
	{
		y = x + 1;
		while (y < 10)
		{
			z = y + 1;
			while (z < 10)
			{
				putchar(x + '0');
				putchar(y + '0');
				putchar(z + '0');
				if (x != 7 || y != 8 || z != 9)
				{
					putchar(',');
					putchar(' ');
				}
				z++;
			}
			y++;
		}
		x++;
	}
	putchar('\n');

	return (0);
}

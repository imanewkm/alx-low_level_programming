#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Description: 'lowercase alphabet except q and e'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet != 'q' && alphabet != 'e')
		{
			putchar (alphabet);
		}
		alphabet++;
	}

	putchar ('\n');

	return (0);
}

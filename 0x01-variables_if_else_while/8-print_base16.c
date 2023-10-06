#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'hexadecimal base digits'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	while (n < 16)
	{
		putchar(n < 10 ? n + '0' : n - 10 + 'a');
		n++;
	}

	putchar('\n');

	return (0);
}

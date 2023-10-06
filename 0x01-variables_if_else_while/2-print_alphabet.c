#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Description: 'alphabet in lowercase'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		alphabet = tolower(alphabet);
		putchar(alphabet);
		alphabet++;
	}

	putchar ('\n');

	return (0);
}

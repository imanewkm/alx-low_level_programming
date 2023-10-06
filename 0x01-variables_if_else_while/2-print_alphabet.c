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
	char alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		printf("%c\n", alphabet);
		alphabet++;
	}
	return (0);
}

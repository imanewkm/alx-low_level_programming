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
	int x;

	for (int x = 'a'; x <= 'z'; x++)
	{
		putchar(tolower(x));
	}
	return (0);
}

#include "main.h"
/**
 * puts_half - function
 * @str: input
 * Return: 0
 */
void puts_half(char *str)
{
	int n;
	int length_of_the_string = 0;

	while (str[length_of_the_string] != '\0')
	{
		length_of_the_string++;
	}

	n = length_of_the_string / 2;

	if (length_of_the_string % 2 == 1)
	{
		n++;
	}

	while (n < length_of_the_string)
	{
		_putchar (str[n]);
		n++;
	}
	_putchar ('\n');
}


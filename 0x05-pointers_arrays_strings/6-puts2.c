#include "main.h"
/**
 * puts2 - prints every other char of a string
 * @str: input
 * Return: 0
 */
void puts2(char *str)
{
	while (*str)
	{
		_putchar (*str);
		str += 2;
	}
	_putchar ('\n');
}

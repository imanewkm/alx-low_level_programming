#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _puts - prints a string, followed by a new line
 * @str: pointer to the string to print
 * Return: 0
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}
/**
 * _atoi - convert a string followed by a new line
 * @s: char
 * Return: 0
 */
int _atoi(const char *s)
{
	int sign = 1;
	unsigned long int resp = 0, firstnum, i;

	for (firstnum = 0; !(s[firstnum] >= 48 && s[firstnum] <= 57); firstnum++)
	{
		if (s[firstnum] == '-')
		{
			sign += -1;
		}
	}
	for (i = firstnum; s[i] >= 48 && s[i] <= 57; i++)
	{
		resp *= 10;
		resp += (s[i] - 48);
	}
	return (sign * resp);
}
/**
 * print_int - prints an int
 * @n: int
 * Return: 0
 */
void print_int(int n)
{
	unsigned int num, divisor = 1;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}
	while (num / divisor > 9)
	{
		divisor *= 10;
	}
	while (divisor)
	{
		_putchar('0' + num / divisor);
		num %= divisor;
		divisor /= 10;
	}
}
/**
 * main - mul
 * @argc: int
 * @argv: char
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error\n");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}

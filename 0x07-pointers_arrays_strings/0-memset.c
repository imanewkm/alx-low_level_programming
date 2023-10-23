#include "main.h"
/**
 * _memset - function that fills memory with constant byte
 * @s: pointer
 * @b: char
 * @n: unsigned int
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

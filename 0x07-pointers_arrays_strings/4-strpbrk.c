#include "main.h"
/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string
 * @accept: string
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s)
	{
		a = accept;
		while (*a)
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return ('\0');
}

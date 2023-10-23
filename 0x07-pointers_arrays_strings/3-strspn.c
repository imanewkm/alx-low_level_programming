#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer
 * @accept: pointer
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	char *a;

	while (*s)
	{
		a = accept;
		while (*a)
		{
			if (*s == *a)
			{
				break;
			}
			a++;
		}
		if (!*a)
		{
			break;
		}
		s++;
		i++;
	}
	return (i);
}

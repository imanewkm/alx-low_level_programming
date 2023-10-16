#include "main.h"
/**
 * _atoi - function
 * @s: input
 * Return: 0
 */
int _atoi(char *s)
{
	unsigned int n = 0;
	int sign = 1;

	while (*s && (*s < '0' || *s > '9'))
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		s++;
	}
	while (*s && (*s >= '0' && *s <= '9'))
	{
		n = n * 10 + (*s - '0');
		s++;
	}
	return (n * sign);
}

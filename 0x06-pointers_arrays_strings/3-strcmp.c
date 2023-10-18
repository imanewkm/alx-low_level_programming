#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: str1
 * @s2: str2
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0')
	{
		if (s2[i] == '\0')
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		else if (s1[i] > s2[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

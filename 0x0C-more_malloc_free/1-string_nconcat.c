#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _strlen - length of string
 * @s: input
 * Return: 0
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: bytes num
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	str = malloc(_strlen(s1) + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	if (str != NULL)
	{
		for (i = 0; s1[i] != '\0' && s1 != NULL; i++)
		{
			str[i] = s1[i];
		}
		for (j = 0; s2[i] != '\0' && j < n; j++)
		{
			str[i + j] = s2[j];
		}
		str[i + j] = '\0';
	}
	return (str);
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: 0
 */
char *_strdup(char *str)
{
	char *s, *c;
	int size, i;

	if (str == NULL)
	{
		return (NULL);
	}
	s = str;
	while (*s)
	{
		s++;
	}
	size = s - str;
	c = malloc(size + 1);

	if (c == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		c[i] = str[i];
	}
	c[size] = '\0';
	return (c);
}

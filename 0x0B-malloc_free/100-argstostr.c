#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strlen - calculate length of a string
 * @str: string
 * Return: 0
 */
int _strlen(char *str)
{
	char *s = str;

	while (*s)
	{
		s++;
	}
	return (s - str);
}
/**
 * argstostr - concatenates all the arg of program
 * @ac: int
 * @av: char
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i = 0, nc = 0, j = 0, c = 0;
	char *s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (; i < ac; i++, nc++)
	{
		nc += _strlen(av[i]);
	}
	s = malloc(sizeof(char) * nc + 1);
	if (s == 0)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, c++)
		{
			s[c] = av[i][j];
		}
		s[c] = '\n';
		c++;
	}
	s[c] = '\0';
	return (s);
}

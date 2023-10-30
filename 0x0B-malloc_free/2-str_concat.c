#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++);
	for (j = 0; s2[j] != '\0'; j++);

	s = malloc((i + j + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		s[i + j] = s2[j];
	}
	s[i + j] = '\0';

	return (s);
}

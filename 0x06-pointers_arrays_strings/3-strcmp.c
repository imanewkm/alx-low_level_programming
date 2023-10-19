#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: str1
 * @s2: str2
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (s1 == s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

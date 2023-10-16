#include "main.h"
/**
 * _strcpy - function
 * @dest: input
 * @src: input
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	char *x = dest;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (x);
}

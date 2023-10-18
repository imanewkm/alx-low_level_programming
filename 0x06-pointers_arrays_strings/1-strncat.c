#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates two strings
 * @dest: str1
 * @src: str2
 * @n: bytes
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int s = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[s + i] = src[i];
	}
	dest[s + i] = '\0';

	return (dest);
}

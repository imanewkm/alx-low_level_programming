#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates two strings
 * @dest: str1
 * @src: str2
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int n = 0;
	int s = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[s + i] = src[i];
	}
	dest[s + i] = '\0';

	return (dest);
}


#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack)
	{
		h = haystack;
		n = needle;
		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}
		if (!*n)
		{
			return (haystack);
		}
		haystack++;
	}
	return ('\0');
}

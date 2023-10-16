#include "main.h"
/**
 * rev_string - reverse a string
 * @s: input
 * Return: 0
 */
void rev_string(char *s)
{
	char *end = s;
	char x;

	while (*end)
	{
		end++;
	}
	end--;

	while (s < end)
	{
		x = *s;
		*s = *end;
		*end = x;
		s++;
		end--;
	}
}

#include "main.h"
/**
 * string_toupper - from lowercase to uppercase
 * @str: string
 * Return: 0
 */
char *string_toupper(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

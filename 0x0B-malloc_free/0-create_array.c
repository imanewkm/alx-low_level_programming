#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - array of chars, and initializes it with a specific char
 * @size: size
 * @c: char
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(size + sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	else if (size == 0)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	str[i] = '\0';
	return (str);
}

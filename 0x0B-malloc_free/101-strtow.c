#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strlen - length of a string
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
 * word_count - Counts the num of words in str
 * @str: string
 * Return: 0
 */
int word_count(char *str)
{
	int i = 0, words = 0, length = 0;

	for (i = 0; *(str + i); i++)
	{
		length++;
	}
	for (i = 0; i < length; i++)
	{
		if (*(str + i) != ' ')
		{
			words++;
			i += _strlen(str + i);
		}
	}
	return (words);
}
/**
 * strtow - splits a string into words
 * @str: string
 * Return: 0
 */
char **strtow(char *str)
{
	char **strings;
	int i = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = word_count(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[i] == ' ')
			i++;
		letters = _strlen(str + i);
		strings[w] = malloc(sizeof(char) * (letters + 1));
		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);

			free(strings);
			return (NULL);
		}
		for (l = 0; l < letters; l++)
		{
			strings[w][l] = str[i];
		}
		strings[w][l] = '\0';
	}
	strings[w] = NULL;
	return (strings);
}

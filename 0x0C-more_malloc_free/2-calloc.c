#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: int
 * @size: int
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *a = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		a[i] = 0;
	}
	return (a);
}

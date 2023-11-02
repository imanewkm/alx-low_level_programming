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
	char *a = malloc(nmemb * size);

	if (a == 0)
	{
		return (NULL);
	}
	return (a);
}

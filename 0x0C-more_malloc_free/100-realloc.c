#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _realloc - realloc
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *str;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	else if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		str = malloc(new_size);
		if (str)
		{
			for (i = 0; i < old_size; i++)
			{
				((char *)str)[i] = ((char *)ptr)[i];
			}
			free(ptr);
		}
		return (str);
	}
}

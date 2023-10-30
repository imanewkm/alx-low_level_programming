#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns pointer to a 2 dim array of int
 * @width: width
 * @height: height
 * Return: 0
 */
int **alloc_grid(int width, int height)
{
	int **s;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	s = malloc(height * sizeof(int *));

	if (s == NULL)
	{
		return (NULL);
	}
	while (i < height)
	{
		s[i] = malloc(width * sizeof(int));

		if (s[i] == NULL)
		{
			while (i--)
			{
				free(s[j]);
				j++;
			}
			free(s);
			return (NULL);
		}
		while (j < width)
		{
			s[i][j] = 0;
			j++;
		}
		i++;
	}
	return (s);
}

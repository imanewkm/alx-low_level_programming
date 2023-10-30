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
	int **s, i = 0, j = 0;

	s = malloc(sizeof(*s) * height);

	if (width <= 0 || height <= 0 || s == 0)
	{
		return (NULL);
	}
	else
	{
		while (i < height)
		{
			s[i] = malloc(sizeof(**s) * width);
			if (s[i] == 0)
			{
				while (i--)
				{
					free(s[i]);
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
	}
	return (s);
}

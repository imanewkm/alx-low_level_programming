#include "main.h"
#include <stdio.h>
/**
 * print_array - function
 * @a: variable
 * @n: variable
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}

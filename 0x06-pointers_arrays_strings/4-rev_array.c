#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: array
 * @n: number of elements of the array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int b;

	for (i = 0; i < n / 2; i++)
	{
		b = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = b;
	}
}

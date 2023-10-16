#include "main.h"
/**
 * swap_int - Entry point
 * @a: input 1
 * @b: input 2
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;
	*b = x;
}

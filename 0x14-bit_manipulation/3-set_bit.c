#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: int
 * @index: uint
 *
 * Return: 1 if it worked, or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (n == NULL || index > sizeof(*n) * 8 - 1)
	{
		return (-1);
	}
	*n = *n | mask;
	return (1);
}

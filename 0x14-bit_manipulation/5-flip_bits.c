#include "main.h"
/**
 * flip_bits - the num of bits needed to flip to get from one to another
 * @n: input
 * @m: input
 *
 * Return: num
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int x = n ^ m;

	while (x)
	{
		count += x & 1;
		x = x >> 1;
	}
	return (count);
}

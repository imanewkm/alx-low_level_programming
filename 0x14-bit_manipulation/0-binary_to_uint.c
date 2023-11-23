#include "main.h"
/**
 * binary_to_uint - converts a binary number to an uint
 * @b: binary input
 *
 * Return: the converted number, or 0 if NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		i++;
	}
	i = 0;
	while (b[i])
	{
		n = n << 1;
		if (b[i] == '1')
		{
			n = n + 1;
		}
		i++;
	}
	return (n);
}

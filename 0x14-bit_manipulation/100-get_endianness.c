#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int num = 1;
	int mask = 1;

	int result = num & mask;

	if (result == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

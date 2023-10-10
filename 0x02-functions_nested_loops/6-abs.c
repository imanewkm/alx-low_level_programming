#include "main.h"
/**
 * _abs - the absolute value of an int
 *
 * @c: The num computed
 *
 * Return: Absolute value of num or zero
 */
int _abs(int c)
{
	if (c < 0)
	{
		int val;

		val = c * -1;
		return (val);
	}
	return (c);
}

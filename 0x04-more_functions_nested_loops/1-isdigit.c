#include "main.h"
#include <ctype.h>
/**
 * _isdigit - Entry point
 * @c: char
 * Return: 0
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

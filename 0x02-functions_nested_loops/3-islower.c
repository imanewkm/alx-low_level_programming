#include "main.h"
#include <ctype.h>
/**
 * _islower - check for lowercase characters
 *
 * @c: char to be checked
 *
 * Return: 1 if c lowercase 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

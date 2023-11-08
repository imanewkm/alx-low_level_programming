#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - sum
 *
 * @a: int
 * @b: int
 *
 * Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - difference
 *
 * @a: int
 * @b: int
 *
 * Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - mul
 *
 * @a: int
 * @b: int
 *
 * Return: int
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division
 *
 * @a: int
 * @b: int
 *
 * Return: int
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - remainder of the division
 *
 * @a: int
 * @b: int
 *
 * Return: int
 */
int op_mod(int a, int b)
{
	return (a % b);
}

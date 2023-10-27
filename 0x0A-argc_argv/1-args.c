#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: int
 * @argv: char
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char **argv)
{
	int i = 0;

	i = argc - 1;
	printf("%i\n", i);
	return (0);
}

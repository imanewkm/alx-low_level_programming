#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: int
 * @argv: char
 * Return: 0
 */
int main(int argc, char **argv)
{
	int sum = 0;
	int i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != 0; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				printf("0\n");
			}
		}
		sum += atoi(argv[i]);
	}
	return (0);
}

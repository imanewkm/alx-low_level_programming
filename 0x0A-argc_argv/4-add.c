#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check
 * @str: array
 * Return: 0
 */
int check_num(char *str)
{
	unsigned int i;

	i = 0;
	while (i < strlen(str))
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/**
 * main - Entry point
 * @argc: int
 * @argv: char
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;
	int sum = 0;

	i = 1;
	while (i < argc)
	{
		if (check_num(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}

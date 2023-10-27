#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: int
 * @argv: char
 * Return: 0
 */
int main(int argc, char **argv)
{
	int mul = 0;
	int num1, num2;

	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}
	else if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;

		printf("%d\n", mul);
	}
	return (0);
}

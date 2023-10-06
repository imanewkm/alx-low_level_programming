#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Description: 'alphabets in upper and lower case'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;
	char ALPHABET;

	alphabet = 'a';

	while (alphabet <= 'z')
	{
		alphabet = tolower(alphabet);
		putchar(alphabet);
		alphabet++;
	}

	ALPHABET = 'A';

	while (ALPHABET <= 'Z')
	{
		ALPHABET = toupper(ALPHABET);
		putchar(ALPHABET);
		ALPHABET++;
	}
	putchar('\n');

	return (0);
}

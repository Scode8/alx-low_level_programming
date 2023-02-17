#include <stdio.h>
/**
 * main - print alphabets in both lower and upper case
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ulc;

	for (ulc = 'a'; ulc <= 'z'; ulc++)
	{
		putchar(ulc);
	}

	for (ulc = 'A'; ulc <= 'Z'; ulc++)
	{
		putchar (ulc);
	}
	putchar('\n');
	return (0);
}

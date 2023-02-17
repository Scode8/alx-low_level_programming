#include <stdio.h>
/**
 * main - print alphabets in reverse
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ar;

	for (ar = 'z'; ar >= 'a'; ar--)
	{
		putchar(ar);
	}
	putchar('\n');
	return (0);
}

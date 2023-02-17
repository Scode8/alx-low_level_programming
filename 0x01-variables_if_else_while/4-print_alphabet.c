#include <stdio.h>

/**
 * main - print alphabet in lower case except q
 * Return: Always 0 (Success)
 */

int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'q' && la != 'e')
			putchar(la);
	}
	putchar ('\n');
	return (0);
}

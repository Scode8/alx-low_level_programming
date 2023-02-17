#include <stdio.h>
/**
 * main - print numberz from 0 to 9
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num2;

	for (num2 = 0; num2 < 10; num2++)
	{
		putchar((num2 % 10) + '0');
	}
	putchar('\n');
	return (0);
}

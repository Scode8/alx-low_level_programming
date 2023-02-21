#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: the inpute
 * Return: last digit
 */

int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		ld = -1 * ld;

	_putchar(ld + '0');
	return (ld);
}
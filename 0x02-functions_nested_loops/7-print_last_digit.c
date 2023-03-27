#include "main.h"
/**
 * print_last_digit - a founction that prints the last digit.
 * @n: the argument of the function its an integer.
 *
 * Return: the last digit.
 *
 */
int print_last_digit(int n)
{
	int d;

	d = n % 10;
	if (d > 0)
	{
		_putchar(d + 48);
		return (d);
	}
	else
	{
		_putchar(-d + 48);
		return (-d);
	}
	_putchar('\n');
}

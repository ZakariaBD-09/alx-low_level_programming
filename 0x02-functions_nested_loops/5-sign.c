#include "main.h"
/**
 * print_sign - a founction that check if a number greater,less or ewual to 0.
 * @n: the argument of the function its an integer.
 *
 * Return: we return 1 if n is greater than 0 or 0 if equal or -1 if less.
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');

}

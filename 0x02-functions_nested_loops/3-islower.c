#include "main.h"
/**
 * _islower - a founction that check for lowercase charcter.
 * @c: the argument of the function.
 *
 * Return: we return 1 if c is lowercase or return 0 if otherwise.
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');

}

#include "main.h"
/**
 * _isalpha - a founction that check for lowercase and uppercase charcter.
 * @c: the argument of the function.
 *
 * Return: we return 1 if c is lowercase or return 0 if otherwise.
 *
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');

}

#include "main.h"
/**
 * _abs - a founction that compute the absulute value of an integer.
 * @i: the argument of the function its an integer.
 *
 * Return: absolute value.
 *
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
	_putchar ('\n');
}

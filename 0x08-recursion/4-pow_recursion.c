#include "main.h"

/**
 * _pow_recursion -  returns the value of x raised to the power of y.
 * @x: parameter from type int.
 * @y: parameter from type int.
 *
 * Return: return -1 if y isless than 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}

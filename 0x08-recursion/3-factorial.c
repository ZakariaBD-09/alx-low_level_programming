#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: parameter from type int.
 *
 * Return: return -1 if nless than 0.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}

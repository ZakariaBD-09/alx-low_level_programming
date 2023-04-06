#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: parameter from type int.
 *
 * Return: return -1 if n equal 0 or 1.
 */
int _sqrt_recursion_temp(int n, int i)
{
	if (i * i == n) {
		return (i);
	} else if (i * i > n) {
		return (-1);
	} else {
		return (_sqrt_recursion_temp(n, i + 1));
	}
}

int _sqrt_recursion(int n)
{
	if (n < 0) {
		return (-1);
	}
	if (n == 0 || n == 1) {
		return (n);
	}
	return (_sqrt_recursion_temp(n, 1));
}

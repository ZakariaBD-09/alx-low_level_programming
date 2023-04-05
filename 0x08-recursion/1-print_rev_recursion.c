#include "main.h"

/**
 * _puts_recursion - function print a string in reverse using recursion.
 * @s: parameter of type char.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}

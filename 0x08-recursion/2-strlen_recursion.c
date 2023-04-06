#include "main.h"

/**
 * _strlen_recursion - return the length of a string using recursion.
 * @s: parameter from type char.
 *
 * Return: return the legth of a dtring.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

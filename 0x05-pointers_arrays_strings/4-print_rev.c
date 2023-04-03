#include "main.h"
/**
 * print_rev -  a function that prints a string, in reverse.
 * @s: parameter from type char.
 */
void print_rev(char *s)
{
	int strlength = 0;
	int rev;

	while (*s != '\0')
	{
		strlength++;
		s++;
	}
	s--;
	for (rev = strlength; rev > 0; rev--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

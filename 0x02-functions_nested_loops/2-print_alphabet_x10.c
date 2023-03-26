#include "main.h"
/**
 * print_alphabet_x10 - a founction that print aphabet.
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}

	/*
	 * char c = 'a';
	 * int i;
	 *
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	*/
}

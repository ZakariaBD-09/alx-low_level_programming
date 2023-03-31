#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - that prints all natural numbers from n to 98.
 * @n: integer in the function parameter.
 *
 */
void print_to_98(int n)
{
	int i = 99;

	if (n <= 98)
	{
		for (; n < i; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
		printf("\n");
	}
	else if (n == 98)
	{
		printf("%d", n);
	}
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
		printf("\n");
	}
}

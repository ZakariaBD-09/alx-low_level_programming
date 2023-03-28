#include "main.h"
/**
 * times_table - a founction that prints the 9 times table.
 */
void times_table(void)
{
	int n = 9;
	int d;
	int i;
	int t = 1;

	for (d = 0; d <= n; d++)
	{
		for (i = 0; i <= 9; i++)
		{
			t = d * i;
			if (t < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(t % 10 + '0');
			}
			else if (t >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(t / 10 + '0');
				_putchar(t % 10 + '0');
			}
		}
		_putchar('\n');
	}
}

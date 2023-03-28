#include "main.h"
/**
 * jack_bauer - a founction that prints every minute of the day.
 */
void jack_bauer(void)
{
	int m, M;
	int h, H;

	for (H = 0; H <= 2; H++)
	{
		for (h = 0; h <= 9; h++)
		{
			for (M = 0; M <= 5; M++)
			{
				for (m = 0; m <= 9; m++)
				{
					if (H >= 2 && h >= 4)
						break;
					_putchar(H + 48);
					_putchar(h + 48);
					_putchar(58);
					_putchar(M + 48);
					_putchar(m + 48);
					_putchar('\n');
				}
			}
		}
	}
}

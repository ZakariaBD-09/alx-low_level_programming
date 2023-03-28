#include "main.h"

/**
 * positive_or_negative - a function that checks for positive or nigative numbers.
 * @i: the cheked number.
 *
 * Return: return 0.
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}

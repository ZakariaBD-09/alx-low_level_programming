#include "main.h"
/**
 * swap_int - swap the value of two integers a and b.
 * @a: a is the parameter of the functionof type int.
 * @b: b is the parameter of the functionof type int.
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

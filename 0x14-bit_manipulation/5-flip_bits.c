#include "main.h"

/**
 * * flip_bits - returns the number of bits.
 * @n: the first number.
 * @m: the second number.
 *
 * Return: the number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int flip = n ^ m;

	while (flip != 0)
	{
		if (flip & 1)
			count++;
		flip >>= 1;
	}

	return (count);
}

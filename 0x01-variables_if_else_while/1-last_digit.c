#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastDigit = n % 10;
	if (lastDigit > 0)
	{
		printf("%d is positive\n", lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("%d is zero\n", lastDigit);
	}
	else
	{
		printf("%d is negative\n", lastDigit);
	}
	return (0);
}

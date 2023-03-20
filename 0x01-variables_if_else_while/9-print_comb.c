#include <stdio.h>
/* betty style doc for function main goes there */
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if(n == 57)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}

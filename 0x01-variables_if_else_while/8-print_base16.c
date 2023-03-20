#include <stdio.h>
/* betty style doc for function main goes there */
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char n;
	char c;

	for (n = 48; n < 58; n++)
		putchar(n);
	for (c = 97; c < 103; c++)
		putchar(c);

	putchar('\n');
	return (0);
}

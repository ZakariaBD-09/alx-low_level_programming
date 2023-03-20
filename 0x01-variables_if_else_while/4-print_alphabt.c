#include <stdio.h>
/* betty style doc for function main goes there */
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char c = 97;

	while (c <= 122)
	{
		if (c == 101 || c == 113)
		{
			++c;
			continue;
		}
		putchar(c);
		++c;
	}

	putchar('\n');
	return (0);
}

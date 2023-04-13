#include "main.h"
#include <stdlib.h>
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: The string to search
 * @accept: The string containing the characters to match
 *
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int match;

	while (*s != '\0')
	{
		match = 0;

		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				count++;
				match = 1;
				break;
			}

			accept++;
		}

		if (match == 0)
			return (count);

		s++;
		accept = accept - count;
	}

	return (count);
}

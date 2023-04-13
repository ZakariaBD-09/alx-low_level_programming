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
	unsigned int i, j, len = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}
		if (!accept[j])
			break;
	}
	return len;
}

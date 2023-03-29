#include "main.h"
/**
 * _strlen - swap the value of two integers a and b.
 * @s: a is the parameter of the functionof type char.
 *
 * Return: return the length of the string.
 */

int _strlen(char *s)
{
	int i;
	int c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		c++;
	}

	return (c);

}

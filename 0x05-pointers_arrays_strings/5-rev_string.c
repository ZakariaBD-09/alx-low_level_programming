#include "main.h"
/**
 * rev_string - a function thet reverses a string.
 * @s: a parameter from type char.
 */
void rev_string(char *s)
{
	char *i = s;

	while (*i != '\0')
		i++;
	i--;
	while (s < i)
	{
		char tmp = *s;
		*s = *i;
		*i = tmp;
		s++;
		i--;
	}
}

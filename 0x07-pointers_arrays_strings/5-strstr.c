#include "main.h"
#include <stdlib.h>
/**
 * _strstr - locates a substring.
 * @haystack: string to search
 * @needle: substring to locate
 *
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (haystack + i);
	}
	return NULL;
}

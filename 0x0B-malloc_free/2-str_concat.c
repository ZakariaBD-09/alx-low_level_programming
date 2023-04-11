#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: parameter of type char.
 * @s2: parameter of type char.
 * Return: NULL on failure.
 *
 */

char *str_concat(char *s1, char *s2)
{
	char *result;
	int i = 0, j = 0;
	int len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";


	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	result = malloc((len1 + len2 + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);


	while (i < len1) 
	{
		result[i] = s1[i];
		i++;
	}

	while (j < len2) 
	{
		result[i] = s2[j];
		i++;
		j++;
	}

	result[i] = '\0';

	return (result);
}

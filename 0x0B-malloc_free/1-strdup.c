#include "main.h"
#include <stdlib.h>
/**
 * _strdup - a function that duplicate a string to new memory space location.
 *
 * @str: parameter from type char.
 * Return: return NULL if str = NULL;
 */

char *_strdup(char *str)
{
	int len = 0;
	int i;
	char *dup_str;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	dup_str = malloc((len + 1) * sizeof(char));

	if (dup_str == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup_str[i] = str[i];

	return (dup_str);
}

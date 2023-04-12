#include "main.h"
/**
 * leet - encodes a string into 1337
 * @str: pointer to the string to encode
 *
 * Return: pointer to the encoded string
 */
char *leet(char *str)
{
	char *ptr = str;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";
	int i;

	while (*ptr)
	{
		i = 0;
		while (letters[i])
		{
			if (*ptr == letters[i])
			{
				*ptr = numbers[i];
				break;
			}
			i++;
		}
		ptr++;
	}

	return (str);
}

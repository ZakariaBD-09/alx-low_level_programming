#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: parameter of type int.
 * @av: argument.
 * Return: string.
 */
char *argstostr(int ac, char **av)
{
	char *result;
	int total_len = 0;
	int i, j;
	int index = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		int arg_len = 0;

		while (av[i][arg_len] != '\0')
			arg_len++;

		total_len += arg_len + 1;
	}

	result = malloc((total_len + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			result[index] = av[i][j];
			index++;
		}
		result[index] = '\n';
		index++;
	}
	result[index] = '\0';

	return (result);
}

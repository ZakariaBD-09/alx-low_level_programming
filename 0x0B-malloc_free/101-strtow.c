#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int count_words(char *str);
int get_word_len(char *str);
void free_array(char **arr, int size);

/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: a pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **tab;
	int i, j, k, len, words;

	if (str == NULL || *str == '\0')
		return (NULL);

	words = count_words(str);
	tab = malloc((words + 1) * sizeof(char *));
	if (tab == NULL)
		return (NULL);

	for (i = 0, j = 0; i < words; ++i)
	{
		while (str[j] && str[j] == ' ')
			++j;

		len = get_word_len(str + j);
		tab[i] = malloc((len + 1) * sizeof(char));
		if (tab[i] == NULL)
		{
			free_array(tab, i);
			return (NULL);
		}

		for (k = 0; k < len; ++k)
			tab[i][k] = str[j + k];
		tab[i][k] = '\0';
		j += len;
	}
	tab[i] = NULL;

	return (tab);
}

/**
 * count_words - counts the number of words in a string
 * @str: the string to count words in
 *
 * Return: the number of words in str
 */
int count_words(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		while (*str == ' ')
			str++;

		if (*str != '\0')
			count++;

		while (*str != ' ' && *str != '\0')
			str++;
	}

	return (count);
}


/**
 * get_word_len - gets the length of the next word in a string
 * @str: the string to get the next word from
 *
 * Return: the length of the next word in str
 */

int get_word_len(char *str)
{
	int len = 0;

	while (str[len] != ' ' && str[len] != '\0')
		len++;

	return (len);
}

/**
 * free_array - frees an array of strings
 * @arr: the array to free
 * @size: the size of the array
 */
void free_array(char **arr, int size)
{
	int i;

	for (i = 0; i < size; i++)
		free(arr[i]);
}

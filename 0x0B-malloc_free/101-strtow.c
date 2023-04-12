#include "main.h"
#include <stdlib.h>

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
	char **words;
	int num_words, word_len, i, j, k;

	if (str == NULL || *str == '\0')
		return (NULL);


	num_words = count_words(str);


	words = malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);


	i = 0;
	while (*str != '\0')
	{

		while (*str == ' ')
			str++;


		word_len = get_word_len(str);


		words[i] = malloc((word_len + 1) * sizeof(char));
		if (words[i] == NULL)
		{

			free_array(words, i);
			free(words);
			return (NULL);
		}


		for (j = 0, k = 0; j < word_len; j++, str++, k++)
			words[i][k] = *str;


		words[i][k] = '\0';


		i++;
	}


	words[i] = NULL;

	return (words);
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

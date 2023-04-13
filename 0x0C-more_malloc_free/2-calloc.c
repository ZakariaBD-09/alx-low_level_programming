#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array and set all elements to 0
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to allocated memory, or NULL if error
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	p = ptr;
	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;

	return (ptr);
}

#include "main.h"
#include <stdlib.h>
/**
 * _memcpy - copies n bytes from src to dest
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes to copy
 *
 * Return: pointer to destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

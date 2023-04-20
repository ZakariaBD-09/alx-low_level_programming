#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array to search.
 * @size: number of elements in the array.
 * @cmp: pointer to the function to compare values.
 *
 * Return: index of first element.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && cmp && size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}

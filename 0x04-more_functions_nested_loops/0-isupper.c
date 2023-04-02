#include "main.h"

/**
 * _isupper - check for uppercase letters.
 * @c: paraneter of type int.
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

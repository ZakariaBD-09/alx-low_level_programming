#include <stdio.h>
#include "function_pointers.h"
/**
* print_name - print a name.
* @name: the name.
* @f: the function.
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

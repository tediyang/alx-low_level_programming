#include "function_pointers.h"

/**
 * print_name - print the name.
 *
 * @name: string param
 * @f: function param
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

#include "function_pointers.h"
/**
 * print_name - Function that prints a name
 * @name: sring to be printed
 * @f: function pointer
 * Return: Returns nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if ((name != NULL) && (f != NULL))
		f(name);
}

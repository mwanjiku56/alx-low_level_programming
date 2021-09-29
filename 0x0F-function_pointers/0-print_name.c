#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: name of the person
 * @a: input pointer function and execute it
 * Return: nothing
 */

void print_name(char *name, void (*a)(char *))
{
	if (name != 0 && a != 0)
		a(name);
}

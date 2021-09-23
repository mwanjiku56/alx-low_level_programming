#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @c: sizeof int
 * Return: nothing
 */

void *malloc_checked(unsigned int c)
{
	void *al;

	al = malloc(c);
	if (al == NULL)
		exit(98);
	else
		return (al);
}

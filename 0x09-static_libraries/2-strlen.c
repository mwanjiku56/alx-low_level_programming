#include "main.h"
#include <stdio.h>

/**
 * _strlen - counts length of a sting or char pointer
 * @s: accept user input
 * Return: always return legnth counted
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

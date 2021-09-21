#include "main.h"

/**
 * _puts - prints just like printf
 * @str: collect the system or user input
 */

void _puts(char *str)
{
	write(1, str, _strlen(str));
	_putchar(10);
}

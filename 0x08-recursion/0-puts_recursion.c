#include <stdio.h>
#include "main.h"

/**
 * void _puts_recursion(char *s)
 * @s: parameter
 * Return: string
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar (*s);
	}
	_putchar ('\n');
}

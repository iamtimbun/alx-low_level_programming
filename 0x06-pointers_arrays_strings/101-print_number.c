#include <stdio.h>
#include "main.h"

/**
 * print_number- print numbers
 * Return: 0
 */

void print_number(unsigned int n)
{
	unsigned int n;

	if (n < 0)
	{
		_putchar ('-');
		n = -n;
	}
	if (n / 10 )
	{
		_putchar (n / 10);
		_putchar (n%10 + '0');
	}
	return (0);
}

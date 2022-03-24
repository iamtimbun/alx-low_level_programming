#include <stdio.h>
#include "main.h"

/**
 * print_number- print numbers
 * Return: 0
 * @n: parameter
 */

void print_number(int n)
{
	unsigned int a;

	if (n < 0)
	{
		_putchar ('-');
		a = -n;
	}
	else
	{
		a = n;
	}
	if (a / 10)
	{
		print_number(a / 10);
	}
	_putchar (a % 10 + '0');
}

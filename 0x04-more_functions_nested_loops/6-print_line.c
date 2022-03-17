#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
  *print_line - print 10 times
  *Return: 0
  *@n: parameter
  */

void print_line(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (a = 1; a <= n; a++)
		{
			_putchar ('_');
		}
	_putchar ('\n');
	}
}

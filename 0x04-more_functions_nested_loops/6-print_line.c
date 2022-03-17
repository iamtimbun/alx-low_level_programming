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
	for (n = 0; n >= -4; n++)
	{
		_putchar ('_');
		if (n <= 0)
		{
			_putchar ('\n');
		}
	}
}

#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
  *more_numbers - print 10 times
  *Return: 0
  */
void more_numbers(void)
{
	int a = 0, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
			{
				_putchar (((b / 10 % 10) + '0'));
			}
			_putchar (b % 10 + '0');
		}
		_putchar ('\n');
	}
}

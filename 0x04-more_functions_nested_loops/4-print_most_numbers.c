#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
  *print_most_numbers - print numbers
  *Return: 0
  */
void print_most_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
		if ((a != 2) && (a != 4))
		{
			_putchar (a % 10 + '0');
		}
		a++;
	}
	_putchar ('\n');
}

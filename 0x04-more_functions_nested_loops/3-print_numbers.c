#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
  *print_numbers - print numbers
  *Return: 0
  */

void print_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
		_putchar (a);
		a++;
	}
	_putchar ('\n');
}

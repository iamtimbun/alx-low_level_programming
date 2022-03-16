#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
  *print_sign - print the sign of a number
  *
  *Return: many things
  */
int print_sign(int n);
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar (48);
		return (0);
	} else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
}

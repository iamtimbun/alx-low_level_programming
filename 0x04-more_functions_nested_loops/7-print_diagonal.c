#include <stdio.h>
#include "main.h"
/**
  *print_diagonal- print diagonally
  *@c: notationi
  *Return: whatever
  */

void print_diagonal(int n)
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
			_putchar ('\\');
			_putchar (' ');
		}
		_putchar ('\n');
	}
}

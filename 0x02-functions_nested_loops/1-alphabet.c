#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * print_alphabet - print alphabet function
 *
 * Return: Always 0 (Success)
*/

void print_alphabet(void)
{
	int ch; 

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}

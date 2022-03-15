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
	char alphabet; 

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}

#include "main.h"

/**
  *print_alphabet_x10 - print alphabet
  *
  *Return: Always 0.
  */

void print_alphabet_x10(void)
{
	char bh;
	int ch = 0;

	while (ch < 10)
	{
		bh = 'a';
		while (bh <= 'z')
		{
			_putchar(bh);
			bh++;
		}
		_putchar('\n');
		ch++;
	}
}

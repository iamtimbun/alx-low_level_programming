#include "main.h"

/**
  *main - check the code
  *
  *Return: Always 0.
  */
void print_alphabet_x10(void)
{
	char bh = 'a';
	int ch;

	while (bh <= 'z')
	{
		while ( ch <= 10)
		{
			_putchar (bh);
			bh++;
		}
	}
	_putchar ('\n');
}

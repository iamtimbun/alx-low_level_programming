#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int nu = 0;
	int bi = 'a';

	while (nu <= 9)
	{
		putchar(nu % 10 + '0');
		nu++;
	}
	while (bi <= 'f')
	{
		putchar(bi);
		bi++;
	}
	putchar('\n');
	return  (0);
}

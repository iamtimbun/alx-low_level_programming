#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int bi = 'z';

	while (bi <= 'z')
	{
		putchar(bi);
		bi--;
	}
	putchar('\n');
	return (0);
}

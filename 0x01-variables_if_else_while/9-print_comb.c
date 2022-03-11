#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int ch=0;
	int bi=9;

	while(ch < 9)
	{
		putchar( ch % 10 + '0');
		ch++;
		putchar(',');
		putchar(' ');
	}
	putchar('9');
	return (0);
}

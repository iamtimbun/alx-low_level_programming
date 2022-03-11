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

	while(ch <= 8)
	{
		putchar( ch % 10 + '0');
		ch++;
		putchar(',');
		putchar(' ');
	}
	while(bi ==9)
	{
		putchar( bi % 10 + '0');
	}
	return (0);
}

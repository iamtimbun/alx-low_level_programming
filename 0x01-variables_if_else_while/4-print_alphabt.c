#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int ch = 'a';
	int bi = 'f';
	int ci = 'r';

	while (ch <= 'd') 
	{
		putchar(ch);
		ch++;
	}
	while (bi <= 'p')
	{
		putchar(bi);
		bi++;
	}
	while (ci <= 'z')
	{
		putchar(ci);
		ci++;
	}
	putchar('\n');
	return (0);
}
	

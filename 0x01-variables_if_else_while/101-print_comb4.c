#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int ch;
	int gh;
	int lh;

	for (ch = 0; ch <= 9; ch++)
	{
	for (gh = 0; gh <=9; gh++)
	{
	for (lh = 0; lh <=9; lh++)
	{
	if (ch<gh && gh<lh)
	{
		putchar ( ch % 100 + '0' );
		putchar ( gh % 100 + '0' );
		putchar ( lh % 100 + '0' );
		putchar (',');
		putchar (' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}

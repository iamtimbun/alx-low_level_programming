#include  <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int ch = 'a';

	while ( ch <= 'z') 
	{
		putchar(ch);
		putchar('\n');
		ch++;
	}
	return (0);
}

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

	while (ch <= 'd', bi <= 'p', ci <= 'z') 
	{
		putchar((ch), (bi), (ci));
		ch++;
	}
	putchar('\n');
	return (0);
}
	

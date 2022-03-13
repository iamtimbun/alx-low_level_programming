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

	for (ch = 0; ch <= 9; ch ++)
	{	
		for (gh = 1; gh <= 9; gh++)
		{
			if (ch<gh)
			{
				putchar (((ch/10) % 10) + '0');
				putchar (((gh/10) % 10) + '0');
				if ( ch !=9)
				{
					putchar (',');
					putchar (' ');
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}

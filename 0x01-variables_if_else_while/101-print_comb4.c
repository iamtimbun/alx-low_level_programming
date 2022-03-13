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

	for (ch = 0; ch <= 7; ch++)
	{
		for (gh = 1; gh <= 8; gh++)
		{
			for (lh = 2; lh <= 9; lh++)
			{
				if (ch < 9)
				{
					putchar ((ch % 100) + '0');
					putchar ((gh % 100) + '0');
					putchar ((lh % 100) + '0');
					if (ch != 9)
					{
						putchar (',');
						putchar (' ');
					}
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}

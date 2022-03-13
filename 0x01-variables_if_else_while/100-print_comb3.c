#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int l;
	int m;

	for (l = 0 ; l <= 9; l++)
	{
		for (m = 0; m <= 9; m++)
		{
			if (l < m)
			{
				putchar ((l % 10) + '0');
				putchar ((m % 10) + '0');
				if (l != 8)
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
